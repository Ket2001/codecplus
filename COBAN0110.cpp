#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, count = 0;
		cin >> n;
		while(n >= 1000){
			n -= 1000;
			count ++;
		}
		while(n >= 500){
			n -= 500;
			count ++;
		}
		while(n >= 200){
			n -= 200;
			count ++;
		}
		while(n >= 100){
			n -= 100;
			count ++;
		}
		while(n >= 50){
			n -= 50;
			count ++;
		}
		while(n >= 20){
			n -= 20;
			count ++;
		}
		while(n >= 10){
			n -= 10;
			count ++;
		}
		while(n >= 5){
			n -= 5;
			count ++;
		}
		while(n >= 2){
			n -= 2;
			count ++;
		}
		while(n >= 1){
			n -= 1;
			count ++;
		}
		cout << count << endl;
	}
	return 0;
}
