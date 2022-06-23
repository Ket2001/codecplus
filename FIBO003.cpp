#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
long A[MAX];
void Fibonacci()
{
    A[0] = A[1] =0;
	long a1 = 1, a2 = 1;
    long i = 2, a;
    while (i <= MAX)
    {
        a = a1 + a2;
        a1 = a2;
        a2 = a;
        A[i] = a;
        i++;
    }
}
int main(){
	int t;
	cin >> t;
	Fibonacci();
	while(t--){
		long n;
		cin >> n;
		long i =2;
		while(A[i] <= n){
			i++;
		}
		if(A[i]-1 > n){
		 	cout << n+1 << endl;
		} else{
			cout << A[i]+1 << endl;
		}
	}
	return 0;
}
