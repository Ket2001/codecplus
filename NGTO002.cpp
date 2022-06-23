#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define ull unsigned long long
using namespace std;
vector <bool> checkPrime(10000001,1);
vector <long > F(10000001,0);
void solve(){
long l,r,res=0;
cin >> l >> r;
cout<<F[r]-F[l-1]<<endl;
}

int main()
{
   srand(time(NULL));
ios_base::sync_with_stdio(false); cin.tie(0); 
  long q;

  checkPrime[0]=false;
  checkPrime[1]=false;
    for(long i =2;i <= 1000001;i++)
        if(checkPrime[i])
            for(int j =2*i;j<=1000001;j+=i)
                checkPrime[j]=false;
    
    for(long i = 1;i<=1000001;i++)
        F[i]=F[i-1]+((checkPrime[i]) ? 1 : 0); 
cin >> q;
while(q--)
solve();
}
