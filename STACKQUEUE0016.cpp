#include <bits/stdc++.h> 
using namespace std;
 void initwsolve(){
int s,t; 
cin>>s>>t;
 if(s>=t) {
cout<<s-t<<endl; return; }
int c[20005];
//1
 for(int i=0;i<20005;i++) c[i]=1e9;
  c[s]=0; 
  queue<int>q;
   q.push(s);
    while( c[t]==1e9) {
int temp=q.front();q.pop();
 if(temp-1>0&&c[temp-1]==1e9)
q.push(temp-1), c[temp-1]=c[temp]+1; 
if(temp*2<=20000&&c[temp*2]==1e9) q.push(temp*2), c[temp*2]=c[temp]+1;}
cout<<c[t]<<endl;
}
int main()
 { int test;
 cin>>test;
while(test--)
 initwsolve(); 
 return 0;
}

