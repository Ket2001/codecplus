
#include<bits/stdc++.h>
#define pi 3.14159265358979323846
#define DoChinhXac 0.00001
using namespace std;
float ChuyenDoi(float x)
{
    while (x > (2 * pi))
    {
		x -= 2 * pi;
	}//tuan hoan chu ki 2 pi
    float mau = 1.0;
    float tu = x;
    float sin = x;
    int sign = -1;
    for (int i = 1; (tu / mau) > DoChinhXac; i++) 
    {
        tu*= x*x;
        mau*=(2*i)*(2*i+1);
        sin += sign * (tu/mau);
        sign = -sign;
    }
    return sin;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
    	float x;
        cin>>x;
        cout<<fixed<<setprecision(6)<<ChuyenDoi(x)<<endl;
    }
}
