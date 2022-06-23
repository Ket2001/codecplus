#include<bits/stdc++.h>
using namespace std;

void input(int n,int Arr[]){
	for(int i = 0; i < n; i++){
		cin >> Arr[i];
	}
}
int main(){
	int n, s;
	cin >> n >> s;
	int Arr[n + 1];
	input(n, Arr);
	int count = 0;
	int tmp = n-1;
	while(1){
		if(s >= Arr[tmp]){
			s -= Arr[tmp];
			count ++;
		} else{
			tmp--;
		}
		if(s == 0){
			cout << count << endl;
			break;
		}
	}
	return 0;
}
