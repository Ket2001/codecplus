#include <bits/stdc++.h>
using namespace std;
#define uint unsigned int


int min2(int a, int b)
{
	if(a <= b)
	{
		return a;
	}
	return b;
}

int result(uint k, uint s)
{
	int count = 0;


	if(s == 3*k)
	{
		return 1;
	}

	for(int i = 0; i <= k; i ++)
	{
		int min = min2(k, s-i);
		for(int j = 0; j <= min; j ++)
		{
			uint n = s - i - j;
			if(n <= k)
			{
				count ++;
			}
		}
	}


	return count;
}

int main() 
{
    int test; 
	cin >> test;
	while(test--)
	{
		int k, s;
		cin >> k >> s;
		cout << result(k, s) << endl;
	}
	return 0;
} 
