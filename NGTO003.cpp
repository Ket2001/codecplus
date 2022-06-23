#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long

bool checkPrime(ll n)
{
  if(n==2||n==3) return true;
  if(n<=1||n%2==0||n%3==0) return false;

  ll sqrtn=sqrt(n);

  for(ll i=5; i<=sqrtn; i+=6) {
    if(n%i==0||n%(i+2)==0) return false;
  }

  return true;
}

bool expAsSum(ll n)
{
  if(checkPrime(n) && checkPrime(n-2))   //1 so nguyen to chi co the bieu dien thanh tong cua 1 so ngto khac voi 2
    return true;
  else
    return false;
}

ll nextminPrime(ll n)
{

  ll prime=n;
  bool found=false;

  while(!found)
  {

    if(expAsSum(prime)) found=true;
    else ++prime;
  }

  return prime;
}

int main()
{
  int t;
  ll n;
  cin>>t;
  while(t--)
  {
    cin>>n;
    cout<<nextminPrime(n)<<endl;
  }

  return 0;
}
