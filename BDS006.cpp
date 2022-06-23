#include<iostream>
#include<cmath>
using namespace std;
int prime[500], index, n, k, dem;
bool SoNguyenTo(int n)
{
	if ((n == 2) || (n == 3))
	{
		return true;
	}
	if ((n % 2 == 0) || (n % 3 == 0) || (n < 2))
	{
		return false;
	}
	int i = -1, sqrt_n = sqrt(n);
	do
	{
		i += 6;
		if ((n % i == 0) || (n % (i + 2) == 0))
		{
			break;
		}
	} while (i <= sqrt_n);
	return (i > sqrt_n);
}
void check(int x, int sum, int t) 
{
	for (int i = x; i < index; i++) 
	{
		sum += prime[i];
		if (sum == n && t==k-1) 
		    dem++;
		else 
		{
			if (sum < n && t < k - 1) 
			    check(i + 1, sum, t + 1);
			if(sum>n) 
			    break;
		}
		sum -= prime[i];
	}
}
void Set ()
{
    index = 0;
	for (int i = 2; i < 500; i++) 
		if (SoNguyenTo(i)) 
			prime[index++] = i;
}
int main() 
{
	Set();
	int t;
	cin >> t;
	while (t--) 
	{
		cin >> n >> k;
		dem = 0;
		check(0, 0, 0);
		cout << dem << endl;
	}
}
