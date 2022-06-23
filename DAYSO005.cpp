#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
int main() {
	int t;
	cin >> t;
	while (t--)	{
		long N, dem = 0; cin >> N;
		long n[MAX], count[MAX];
		for (long i = 0; i < N; i++)
			cin >> n[i];
		for (long i = 0; i < MAX; i++)
			count[i] = 0;
		for (long i = 0; i < N; i++)
			count[n[i]]++;            // vdu n[i] = 2 tai vi tri 1 & 2 thi count tai 2 se cong 2 don vi

		for (long i = 0; i < MAX; i++)
			if (count[i] == 1) dem++;
		cout << dem << endl;
	}
	return 0;
}
