#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        unsigned long long thapphan;
        cin >> thapphan;
        if(thapphan == 0) cout << 0;
        int a[100], m = 0;
        while (thapphan)
        {
            a[m] = thapphan % 16;
            thapphan /= 16;
            m ++;
        }
        for (int i = m-1; i >= 0; i--)
        {
            if (a[i] == 10)cout << 'A';
            if (a[i] == 11)cout << 'B';
            if (a[i] == 12)cout << 'C';
            if (a[i] == 13)cout << 'D';
            if (a[i] == 14)cout << 'E';
            if (a[i] == 15)cout << 'F';
           
            if(a[i] <10) cout << a[i];
        }
        cout << endl;
    }
    return 0;
}
