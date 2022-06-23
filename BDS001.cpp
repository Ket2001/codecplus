#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

ll ways(ll n)
{

  ll w[n+1];
  memset(w,0,sizeof(w));
  w[0]=1;

  for(ll i=1; i<n; ++i)
  {
    for(ll j=i; j<=n; ++j)
      w[j]=(w[j] + w[j-i])%MOD;
  }

  return w[n];
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;

  while(t--)
  {
    ll n;
    cin>>n;
    cout<<ways(n)<<endl;
  }

  return 0;
}
