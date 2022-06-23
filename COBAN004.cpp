#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    int t;
    long long n;
    cin>>t;
    while(t--)
    {
	
   cin >> n;
        if (n == 1 || n == 2) {
            cout << 9 << endl;
        } else if (n > 2) {
            int mod = n / 2 + n % 2;
            int result = 9 * pow(10, mod - 1);
            cout << result << endl;
        }
    }
}


