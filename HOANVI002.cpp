#include<bits/stdc++.h>
using namespace std;

void kDifference(int n, int k)
{
  if(k==0) 
  {
    for(int i=1; i<=n; ++i)
      cout<<i<<" ";
    cout<<endl;
  }


  else if(n % (2*k) != 0) {
    cout<<-1<<endl;
  } else {

    for(int i=0; i<n; ++i)
    {
      if((i/k) % 2 == 0)
        cout<<i+k+1<<" ";
      else
        cout<<i-k+1<<" ";
    }
    cout<<endl;

  }
}

int main()
{
  int t,n,k;
  cin>>t;
  while(t--)
  {
    cin>>n>>k;
    kDifference(n, k);
  }
  return 0;
}
