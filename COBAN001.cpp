#include<iostream>
#include<math.h>
using namespace std;
int a[100];
void check(long n){
	int tmp = 0, k = 0;
	long mask = n;
	while(n>0){
		a[k] = n%10;
		n /=10;
		tmp++;
		k++;
	}
	int S = 0;
	for(int i = 0; i<k; i++){
		S += pow(a[i], k);
	}
	if(S == mask){
		cout <<"1"<<endl;
	} else cout <<"0"<<endl;
}
int main(){
	int t;
	cin >> t;
	long n;
	while(t--){
		cin >> n;
		check(n);
	}
	return 0;
}
