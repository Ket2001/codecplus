#include<iostream>
#include<cmath>

using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--){
		long l,r;
		int tong=0;
		cin>>l>>r;
		for(long i=0;i<=sqrt(r);i++){
			if(l<= pow(i,2) && r >= pow(i,2)){
				tong++;
			}
		}
		cout<<tong<<endl;
		
	}
}

