#include<bits/stdc++.h>
using namespace std; 
 int oprt(char x){
  switch(x){
    case '^':return 0;
	case '%': case '*':case '/' :return 1;
	case '+': case '-':return 2;
	 default:return 3;
}
}
void initwsolve(){
string str;
cin>>str; 
string res="";
stack <char>s;
 for(int i=0;i<str.size();i++){
   if('A'<=str[i]&&str[i]<='Z'||'a' <=str[i]&&str[i]<='z')res+=str[i];
    else {
      switch(str[i]) {
    case '(': s.push(str[i]);break; 
	case ')': while(s.top()!='('&&s.size()){
		res+=s.top();s.pop();
	}
	s.pop();
		break;
	
case '^' : case '%': case '*':case '/' :case '+': case '-':
  while(s.size()&&oprt(s.top())<=oprt(str[i])){
    res+=s.top();s.pop();}
	 s.push(str[i]);break;
}
}
}
while(s.size()){
if(s.top()!='(')res+=s.top();
s.pop(); 
}
 cout<< res <<endl;
}
int main(){
 int t;
 cin>>t;
 while(t--) initwsolve();
 return 0;
}
