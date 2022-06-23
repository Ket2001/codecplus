#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

//ham maxprod tra ve tich lon nhat cua cac chu so cua 1 so nao do <= n
//cong thuc: maxprod(n) = max(maxprod(n/10)*(n%10), maxprod(n/10 - 1)*9)

ull maxProd(ull n)
{
  if(n==0) return 1;//truong hop n=0: dieu kien dau (do n/10 sau moi lan => den khi n=0 thi return 1) (nhan 1 cuoi cung)
  if(n<10) return n;//truong hop n co 1cs: tra ve chinh no

  return max(maxProd(n/10)*(n%10), maxProd(n/10 - 1)*9);
  //tra ve gia tri lon nhat cua ket qua
  //maxProd(n/10)*(n%10): tich cac chu so cua n
  //maxProd(n/10 - 1)*9: tich cac chu so cua so nho hon n
  //lay max 1 trong 2 cai
}

int main()
{
  int t;
  cin>>t;
  while(t--) {
    ull n;
    cin>>n;
    cout<<maxProd(n)<<endl;
  }
  return 0;
}
