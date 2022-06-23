#include<bits/stdc++.h>
using namespace std;
vector<int> scp;
int DemsoCach(int N,int chiso){
	if(N==0)
	return 1;
	if(chiso<0 || N<0)
	return 0;
	int dem=DemsoCach(N-scp[chiso],chiso);
	int dem2= DemsoCach(N, chiso-1);
	return dem+dem2;
	}
int main(){
	int t;
	cin>>t;
	while(t--){
		int N;
		cin>>N;
		scp.clear();
		for(int i=1;i*i<=N;i++)
		scp.push_back(i*i);
		cout<<DemsoCach(N,scp.size()-1)<<endl;
		}
		}
		
