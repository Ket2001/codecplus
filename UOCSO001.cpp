#include <bits/stdc++.h>

using namespace std;
long uocSo001(long a)
{
    long tong= 0; 
    if(a == 1)	
        return 0;
    for(long i = 2; i <= a/i; i++)
    {
        if(a%i == 0)
        {
            tong += i + a/i;
            if (i == a/i)
            {
                tong-= i;
            }
        }
    }
    return tong + 1;
}
int main()
{
    int i;
    long n;
    cin >> i;
    while(i --)
    {
        cin >> n;
        cout << uocSo001(n) << endl;
    }
    return 0;
}

