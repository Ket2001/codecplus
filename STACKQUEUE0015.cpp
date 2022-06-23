#include<bits/stdc++.h>
using namespace std;

bool check(int n){
	if(n <= 65){
		if(n == 8 || n == 6) return true;
		return false;
	}
	while(n > 0){
		int tmp = n%10;
		if(tmp == 6 || tmp == 8){
			n /= 10;	
		} else return false;
	}
	return true;
}
void out(int n){
	vector<int> pt;
		int count = 0;
		for(int i =6; i < pow(10,n); i++){
			if(check(i) == true){
				pt.push_back(i);
				count ++;
			}
		}
		cout << count <<endl;
		for(int j = pt.size() - 1; j >= 0; j--){
			cout << pt[j] <<" ";
		}
		cout << endl;
}

int main(){
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		out(n);
	}
	return 0;
}
