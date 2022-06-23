#include<iostream>
#include<math.h>
#include<iomanip> // thu vien de lay gia tri phan thap phan sau dau phay

using namespace std;

long long fact(long long n){ // ham tinh k giai thua
	if(n==1){
		return 1;
	}
	return n*fact(n-1);
}
int main(){
	long long n;
	float x;
	int test;
	cin>>test;
	while(test --){
	cin>>n>>x;
	float sum=0;
	for(int i=1;i<=n;i++){
		sum+=(pow(x,i))/(fact(i));
	}
	cout<<fixed<<setprecision(3)<<sum<<endl;// lay gia tri thap phan sau dau phay
}
	return 0;
}
