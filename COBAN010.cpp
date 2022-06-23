#include<bits/stdc++.h>

using namespace std;

long long ketqua(long long a, long long n, long long p){
    long long ketqua = 1;
    a = a%p;
    if(a==0) return 0;
    while(n > 0){
        if( n & 1){
            ketqua = (ketqua * a) % p;
        }

        n = n >> 1; // y = y/2
        a = (a * a) % p;


    }

    return ketqua;

}

int main(){
    int test;
    cin>>test;
    while(test --){
        long long a,n;
        cin>> a >> n;
        long long p = pow(10,9) + 7;
        cout << ketqua(a,n,p) << endl;
    }
    return 0;
}
