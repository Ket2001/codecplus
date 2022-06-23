#include<bits/stdc++.h>
using namespace std;
void checkdaungoac()
{
    string str;
    cin.ignore();
    getline(cin, str);
    stack<char> s;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]!=')')
            s.push(str[i]);
         else 
            {
                bool check = 0;
                while(s.size()!=0)
                {
                    char a=s.top(); s.pop();
                    if(a == '(') break;
                    if(a == '+' || a == '-' || a== '/' || a == '*')
                      check =1;
                }
            if(check == 0)
                      { cout<<"Yes\n";
                      return ;
                      }
            }  
                

    }
    cout<<"No\n";
}
int main()
{
    int t;cin>>t;
    cin.ignore();
    while(t--)
    {
         checkdaungoac();
    }
    return 0;
}