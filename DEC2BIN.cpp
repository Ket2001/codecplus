#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        string s="";
        while(n>0){
            s=char(n%2+48)+s;
            n/=2;
        }
        cout<<s<<endl;
    }
}
