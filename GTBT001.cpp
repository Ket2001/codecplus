#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
   int t, n;
  float x, tong;
  cin >> t;
  while(t--) {
  	// Nhap vao n va x
    cin >> n >> x;
    if(n < 1 || n > 20) return 0;
    tong = 0; 
    for(int i = 1.0; i <= n; i++) {
      tong += 2.0*pow(x,i)/(pow(i,2)+i); //dung cong thuc tong cap so cong de tinh
    }
    cout << fixed << setprecision(3) << tong << endl;
  }
  return 0;
}
