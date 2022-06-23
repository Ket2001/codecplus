#include<iostream>
#include<math.h>
using namespace std;

bool nto(long n){
	if(n < 2) return false;
	if(n == 2) return true;
	if(n%2 == 0) return false;
	for(long i =3; i<= sqrt(n); i += 2){
		if(n%i == 0) return false;
	}
	return true;
}
long Umax(long n){
	for(long i =n; i>= 1; i--){
		if(n%i == 0 && nto(i))
		return i;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long n;
		cin >> n;
		for(long i= n; i>= 1; i--){
			if(Umax(i) > sqrt(i)){
				cout << i <<endl;
				break;
			}
		}
	}
	return 0;
}
