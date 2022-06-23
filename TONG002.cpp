#include<iostream>
using namespace std;
int main()
{
long long a,b,i,h,k,t;
cin>>t;
while(t--)
  { cin>>a>>b;
   i=0;
   h=b*(b+1)/2;
   k=a*(a-1)/2;
   i=h-k;
  cout<<i<<endl;
  }
  return 0;
}
