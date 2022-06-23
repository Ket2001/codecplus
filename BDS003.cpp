#include <iostream>
using namespace std;

// Returns value of Binomial Coefficient C(n, k)
long long binomialCoeff(int n, int k)
{
	long long C[50 + 1][50 + 1] = { 0 };
	int i, j;

	// Calculate value of Binomial Coefficient in bottom up manner
	for (i = 0; i <= n; i++) {
		for (j = 0; j <= min(i, k); j++) {
			// Base Cases
			if (j == 0 || j == i)
				C[i][j] = 1;

			// Calculate value using previously stored values
			else
				C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
		}
	}

	return C[n][k];
}

// Driver Code
int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin>>n>>k;
		cout << binomialCoeff(n - 1, k - 1) << endl;
	}
	return 0;
}
