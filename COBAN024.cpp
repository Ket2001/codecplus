#include<iostream>
#include <bits/stdc++.h>
using namespace std;


int count(int S[], int m, int n)
{
	if (n == 0)
		return 1;
	if (n < 0)
		return 0;
	if (m <= 0 && n >= 1)
		return 0;
	return count(S, m - 1, n) + count(S, m, n - S[m - 1]);
}

int main()
{
	int i, j, m, n;
	int arr[50];
    cin>>n>>m;
    i=0;
    while (m--)
    { i++;
	cin>>arr[i]; 
	}
 m = sizeof(arr) / sizeof(arr[0]);
	j=(arr, m, n);
	cout<<j<<endl;
	
	return 0;
}

