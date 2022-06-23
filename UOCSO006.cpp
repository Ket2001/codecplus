// Check if the given two number
// are friendly pair or not.
#include <bits/stdc++.h>
using namespace std;
 
// Returns sum of all factors of n.
long long sumofFactors(long long n)
{
 
    // Traversing through all prime factors.
    long long dau = n;
    long long res = 1;
    for (long long i = 2; i <= sqrt(n); i++) {
 
        long long count = 0, curr_sum = 1;
        long long curr_term = 1;
        while (n % i == 0) {
            count++;
 
            // THE BELOW STATEMENT MAKES
            // IT BETTER THAN ABOVE METHOD
            // AS WE REDUCE VALUE OF n.
            n = n / i;
 
            curr_term *= i;
            curr_sum += curr_term;
        }
 
        res *= curr_sum;
    }
 
    // This condition is to handle
    // the case when n is a prime
    // number greater than 2.
    if (n >= 2)
        res *= (1 + n);
 
    return res - dau ;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        if(sumofFactors(a) == b){
            if(sumofFactors(b) == a){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        else{
            cout << "NO" << endl;
        }
    }
}
