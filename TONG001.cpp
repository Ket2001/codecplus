#include<iostream>
using namespace std;
int main()
{
long long a,b,i,h,k,t;
cin>>t;
while(t--)
  { cin>>a>>b;
   if (b%2==1) 
   { h=(b+1)/2;
      }
   else 
   { h=b/2;
   }
   if (a%2==1) 
   { k=(a-1)/2;
      }
   else 
   { k=a/2;
   }
   i=h*h-k*k;
  cout<<i<<endl;
  }
  return 0;
}

