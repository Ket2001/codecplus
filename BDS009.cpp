#include<iostream>
#define MOD 1000000007

using namespace std;
typedef unsigned long long ull;


ull fibx(int n)
{ 
	ull fibx[n+1];
	
	
  	int i;  	
  	fibx[0] = 0;
  	fibx[1] = 1;
 
 	for (i = 2; i <= n; i++)
  {
     
      fibx[i] = fibx[i-1] + fibx[i-2];
  }
 
  return fibx[n];
}
 

ull countOddWays(int n)
{
    return fibx(n);
}


void multiply(ull a[2][2], ull b[2][2])
{
    ull x = (a[0][0] * b[0][0] % MOD + a[0][1] * b[1][0] % MOD) % MOD;
    
    ull y = (a[0][0] * b[0][1] % MOD + a[0][1] * b[1][1] % MOD) % MOD;
    
    ull z = (a[1][0] * b[0][0] % MOD + a[1][1] * b[1][0] % MOD) % MOD;
    
    ull w = (a[1][0] * b[0][1] % MOD + a[1][1] * b[1][1] % MOD) % MOD;
     
    a[0][0] = x;
    
    a[0][1] = y;
    
    a[1][0] = z;
    
    a[1][1] = w;
}
 
void power(ull a[2][2], int n)
{
    if(n == 0 || n == 1) return;
    
    ull b[2][2] = {{1, 1}, {1, 0}};
     
    power(a, n / 2);
    multiply(a, a);
     
    if (n % 2 != 0) multiply(a, b);
}
 
ull fib(int n)
{
    ull a[2][2] = { { 1, 1 }, { 1, 0 } };
     
    if (n == 0)
        return 0;
         
    power(a, n - 1);
     
    return a[0][0];
}
 

int main()
{
	int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;    	
    	cout << fib(n)<<endl;
 	}

   return 0;
}
