#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
ull Count (ull n){
	if(n<2)
	return n;
	ull temp = 1 + min( n%3 + Count(n/3), n%2 + Count(n/2));
	return temp;
}
int main (){
	int t;
	cin >> t;
	while(t--){
		ull N;
		cin>>N;
		cout<< Count(N) <<endl;
	}
	return 0;
}
