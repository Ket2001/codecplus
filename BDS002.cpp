#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long

ull C(ull n, ull k)
{
  if(k>n || n<0 || k<0) return 0;

  if(k>n-k) k=n-k;
  ull res=1;

  for(ull i=0; i<k; i++)
  {
    res*=(n-i);
    res/=(i+1);
  }

  return res;
}

int main()
{

  int t;
  ull n,k;
  cin>>t;
  while(t--)
  {
    cin>>n>>k;

    cout<<C(n+k-1,k-1)<<endl;

  }

  return 0;
}
