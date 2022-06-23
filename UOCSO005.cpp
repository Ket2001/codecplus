#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long k = n;
        long long z ;
        z=n;
        int dem= 0, dem2=0,sl=0;
        long long a[50] = {0} , b[50] = {0};
        
        
        if(n%2==0){
            sl++;
        }
        while(n%2==0){
            dem2++;
            n/=2;
        }
        
        int count = 0;
        
        for(long long i = 3 ; i <= sqrt(n); i=i+2){
            if(n%i==0){
                sl+=1;
               a[count] = i;
            
            while(n%i==0){
                b[count]++;
                n/=i;
            }count++;}
            
            
        }
        if(n>1){
            sl++;
        }
        cout << sl << endl;
        if(k%2==0){
            cout << "2 " <<  dem2 << endl;
        }
        for(int i = 0 ; i <= count ; i++){
            if(a[i] != 0 && b[i] != 0){
            cout << a[i] << " " << b[i] << endl;}
        }
        if(n>1){
            cout << n << " " << "1" << endl;
        }
        
    }
}
