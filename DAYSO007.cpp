#include<bits/stdc++.h>
#define MAX 40
using namespace std;
int D[MAX][10*MAX];
int DemNhom(int current_position,int current_sum, int N, char *num){
	if(current_position == N)
	return 1;
	if(D[current_position][current_sum]!= -1)
	return D[current_position][current_sum];
	
	D[current_position][current_sum]=0;
	int sum=0;
	int temp=0;
	for(int i= current_position; i<N; i++){
		sum+=(num[i]- 48);
		if(sum >= current_sum)
		temp+=DemNhom(i+1,sum,N,num);
		}
		D[current_position][current_sum]=temp;
		return temp;
		}
	int main(){
	int t;
	cin>>t;
	while(t--){
		int N;
		char num[MAX+1];
		cin>>N;
		for(int i=0; i<N; i++){
			cin>>num[i];
			}
			num[N]='\0';
			memset(D,-1,sizeof(D));
			cout<<DemNhom(0,0,N,num)<<endl;
			}
			}

