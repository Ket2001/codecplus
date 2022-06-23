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
		long total = 0, i =2;
		cin >> n;
		while(A[i] <= n){
			if(A[i] % 2 == 0){
				total += A[i];
			}
			i++;
		}
		cout << total <<endl;
	}
	return 0;
}
