#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define MAX_NUM 1000000000000000001
ull Dequy(ull result,short x,int  xCount, short y, int yCount,ull n, int sochuso) {
	if (xCount + yCount > sochuso + 2 || result > MAX_NUM)
		return MAX_NUM;
	if (xCount == yCount && result >= n)
		return result;
	return min(Dequy(result * 10 + x, x, xCount + 1, y, yCount, n, sochuso),
		       Dequy(result * 10 + y, x, xCount, y, yCount + 1, n, sochuso));
}
ull Timso(ull n, short x, short y) {
	int sochuso = floor(log10(n)) + 1;
	ull result = 0;// so can tim
	int xCount = 0;// so chu so x trong so can tim
	int yCount = 0;
	if (x == y) {
		while (result < n) 
			result = result * 10 + x;
		return result;
	}
	return Dequy(result, x, xCount, y, yCount, n, sochuso);
}
int main() {
	long long t;
	cin >> t;
	while (t--)
	{
		ull N;
		short x, y; 
		cin >> N >> x >> y;
		cout << Timso(N, x, y) << endl;
	}
	return 0;
}
