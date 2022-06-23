#include<bits/stdc++.h>
 using namespace std;
  void initwsolve(){
string str;
cin>>str; 
int res=0;
 stack<char>s;
  for(int i=0;i<str.length();i++){
   if(str[i]=='(')
   if(str[i-1]=='+'||str[i-1]=='-') s.push(str[i-1]);
  if(s.size()&&s.top()=='-'){
if(str[i]=='+') str[i]='-'; 
else if(str[i]=='-') str[i]='+';
}
if(str[i]==')'&&s.size())s.pop();
}
for(int i=0;i<str.length();i++){
if(str[i]!='(' && str[i]!=')') cout<<str[i];
 } 
 cout<<endl;
}
int main(){
int t;
cin>>t;
 while (t--)initwsolve(); 
 return 0;
}
