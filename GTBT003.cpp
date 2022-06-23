#include<bits/stdc++.h>
using namespace std;
long giai_thua(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	else {
		return n * giai_thua(n - 1);
	}
}
int main() {
	int n, t;
	float can;
	cin >> t;
	while (t)
	{
		cin >> n;
		if (n == 1)
		{
			can = 1;
		}
		if (n > 1)	{
			can = 1;
			for (int i = 2; i <= n; i++)
			{ 
				 can = pow(giai_thua(i) + can , 1.0f*1 / (i + 1));
			}
			
		}
		t--;
		cout << fixed << setprecision(3) << can << endl;
	}
	return 0;
}
