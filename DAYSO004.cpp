#include<bits/stdc++.h>
#define N (int)1e5+1
using namespace std;

int n;
int a[N], b[N];

int main(){
	int t;
	cin>>t;
	while(t--)
    {
	
	cin>>n;	for(int i=1; i<=n; i++) cin >> a[i];
	
	int res= 1;		b[1]= a[1];
	
	for(int i=2; i<=n; i++){
		int pos= lower_bound(b+1, b+1+res, a[i]) - b;
		
		b[pos]= a[i];
		res= max(res, pos);
	}
	
	cout<<res<<endl;
}
return 0;
}
