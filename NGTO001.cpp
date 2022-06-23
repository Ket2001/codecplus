#include<bits/stdc++.h>
using namespace std;
bool kiem_tra_so_nguyen_to(long long n) {
	if (n == 0 || n == 1 || (n % 2 == 0 && n > 2))
	{
		return false;
	}
	if (n == 2)
	{
		return true;
	}
	for (long long  i = 3; i <= sqrt(n); i+=2)	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}
bool kiem_tra_so_nto_hoan_toan(long long n) {
	int dem = 0;
	int count = 0;
	long long tam;
	tam = n;
	while (n)
	{
		count++;
		if (kiem_tra_so_nguyen_to(n % 10))
		{
			dem++;
		}
		n /= 10;
	}
	n = tam;
	if (dem == count )
	{
		if (kiem_tra_so_nguyen_to(n)) {
			return true;
		}
	}
	else return false;
}
int main() {
	int t;
	cin >> t;
	while (t--)
	{
		long long  n;
		cin >> n;
		long dem = 0;
		for (long long i = 1; i <= n; i++)
		{
			if (kiem_tra_so_nto_hoan_toan(i))
			{
				dem++;
			}
		}
		cout << dem << endl;
	}
	return 0;
}
