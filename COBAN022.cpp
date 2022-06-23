#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long x, y, m;
		cin >> x >> y >> m;
		long hop = m / x;
		long vo = hop;
		while(vo >= y){
			hop += vo / y;
			vo = vo/y + vo%y;
		}
		cout << hop <<endl;
	}
	return 0;
}
