#include"iostream"
#include"math.h"
#include"iomanip"
using namespace std;
int chinhphuong(long long  n){
	long long x= sqrt(n);
	if( x*x ==n){
		return 1;
	}
	return 0;
}

int check(long long  n){
	long long s=1;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0 ){
			s+=i+n/i;
		}
	}
    if(chinhphuong(n)==1){
        s=s-sqrt(n);
    }
	if(s==n){
		return 1;
	}
	return 0;
}


int main(){
	unsigned int t;
	cin >>t;
	for(int i=0;i<t;i++){
		long long n;
		cin >> n;
		cout<< check(n) <<endl;
	}
	return 0;
}


