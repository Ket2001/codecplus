#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
ull chuyendoi(string str, int n) {
	ull result = 0;
	for (int i = 0; i < n; i++)
	{
		if (str[i] == '1')
			result |= 1 << (n - 1 -i);  //result += 2^i
	}
	return result;
}
ull Count(string x, string y, int n) {
	ull xx = chuyendoi(x, n);
	ull yy = chuyendoi(y, n);

	if (xx == yy)
		return 0;
	if (xx > yy) return  xx - yy - 1;
	if (xx < yy) return yy - xx - 1;
}
int main() {
	long long t;
	cin >> t;
	while (t--)
	{
		string x, y;
		int n;
		cin >> n;//do dai xau nhi phan
		cin >> x >> y;
		cout << Count(x, y, n) << endl;
	}
	return 0;
}
