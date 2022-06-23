#include<bits/stdc++.h>

using namespace std;
const long long mod=1e9+7;

long long LuyThua(long long x , long long n){
	long long res=1;
	while(n){
		if(n & 1){
			res=(res*x)%mod;
		}
		x=(x*x)%mod;
		n>>=1;
	}
	return res;
}

long long Du(string a, long long mod){
    long long r = 0;
    for (int i=0;i<a.size();i++){
        r = r * 10 + a[i] - '0';
        r %= mod;
    }
    return r;
}

int main(){
    int test;
	cin >> test;
    while (test--){
        string a,b;
		cin >> a >> b;
        long long numA = Du(a,mod);
        long long numB = Du(b,mod - 1);
        cout << LuyThua(numA, numB) << endl;
    }
    return 0;
}
