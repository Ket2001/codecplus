#include<bits/stdc++.h> 
using namespace std; 
bool oprt(char x){
 if(x=='+'||x=='-'||x=='*'||x=='/') return 1; 
 return 0;
}
void initwsolve(){
string str;
cin>>str; 
stack <string> s; 
  for(int i=0;i<str.length();i++){
   if(oprt(str[i])==0) s.push(string(1,str[i]));
   else{
   string strl=s.top();s.pop(); 
   string str2=s.top();s.pop(); 
   string temp='('+str2+ str[i]+strl+')'; 
   s.push(temp);
}
}
    cout<<s.top()<<endl;
}
int main(){
int t;
  cin>>t;
  cin.ignore();
   while (t--)initwsolve();
    return 0;
}

