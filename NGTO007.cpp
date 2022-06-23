#include<iostream>
#include<cmath>
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

int main(){
	int t,a,b,c,d;
	cin>>t;
	d=1;
	while(t--){
		cin>>a>>b;
		for (int c=b; c>=a; c--)
		{ if (nto(c)) { cout<<c<< endl; break ;
		}
		}
		
	
	}
	return 0;
}
