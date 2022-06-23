#include<bits/stdc++.h>
using namespace std;

float result(int n, float x){
	float s=0;
	long long tmp=1;
	for(int i=1;i<=n;i++){
		tmp *= x;
		s=sqrt( tmp+ s);
	}
}
int main(){
	unsigned int t;
	cin >>t;
	while(t--){
		int n;
		float x;
		cin >> n>> x;
		
		cout << fixed << setprecision(3) << result(n,x) << endl;
	}
	return 0;
}
