#include<iostream>
#include<cmath>
using namespace std;


long kiemTraNguyenTo(long a){
	if(a<2){
		return false;
	}else{
		for(long i=2;i<= sqrt(a);i++){
			if(a%i==0)return false;
		}
		return true;
	}
}



void kiemTraUoc(long a){
	int tong=0;
	for(long i=2;i<=a;i++){
		if(a%i==0 && kiemTraNguyenTo(i)){
			tong++;
		}
	}
	cout<<tong<<endl;
}


int main(){
	int t,a;
	cin>>t;
	while(t--){
		cin>>a;
		kiemTraUoc(a);
	}
	return 0;
}


