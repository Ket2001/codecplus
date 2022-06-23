#include<bits/stdc++.h>
using namespace std;
using namespace std;
bool kiem_tra_tung_chu_so_chinh_phuong(unsigned long long n, int k) {
	int chia;
	int dem = 0;
	while (n)
	{
		chia = n % 10;
		if (chia == 0 || chia == 1 || chia == 4 || chia == 9)
		{
			dem++;
		}
		n /= 10;
	}
	if (dem == k)
	{
		return true;
	}
	return false;
}
int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int k;
		cin >> k;
		if (k==1) { cout<<0<<endl;
		}
		else
		for (unsigned long long i =ceil(sqrt(pow(10, k - 1))); i < floor(sqrt(pow(10, k))); i++)
		{
			if (kiem_tra_tung_chu_so_chinh_phuong(i*i, k) ){
				cout << i*i << endl;
				break;
			}
		}
	}
	return 0;
}
