#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; string s; long long f[1000];
    cin>>t;
    f[0]=1;
    for (int i=1;i<=100;i++) {
        f[i]=f[i-1]*2;
    }
    for (int i=1;i<=t;i++) {
        cin>>s;
        long long kq=0,d=0;
        for (int i=s.size()-1;i>=0;i--) {
            if (s[i]=='1') {
               kq=kq+f[d] ;
               d++;
            }
            else d++;
        }
         cout<<kq<<endl;
    }
}
