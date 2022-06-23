#include <bits/stdc++.h>
using namespace std;

//Kiem tra so doi xung
bool Check(string s)
{
    for (int i = 0; i < s.length() / 2; i++)
    {
        if (s[i] != s[s.length() - 1 - i])
        {
            return false;
        }
    }
    return true;
}
 
// doi so doi xung qua chuoi
string Swap(long long n)
{
    string s = "";
    while (n > 0) 
    {
        s += (n % 10 + '0');
        n /= 10;
    }
    return s;
}
 
// 
void NearNumber(long long n)
{
    long long a = n - 1;
    while (Check(Swap(a)) == false)
    {
        a --;
    }
        
    int b = n + 1;
    while (Check(Swap(b)) == false)
    {
        b ++;
    }

    if(Check(Swap(n)) == true)
    {
        b = n;
    }
 
    // check so doi xung min
    if (abs(n - a) > abs(n - b))
        cout << b;
    if (abs(n - a) < abs(n - b))
        cout << a;
    if (abs(n - a) == abs(n - b))
        cout << a << " " << b;
    
}
 
int main()
{
    int test;
	cin >> test;
	while(test--)
	{
		long long n;
		cin >> n;
		NearNumber(n);
        cout << endl;
	}
	return 0;
}
