#include<iostream>
using namespace std;
int main()
{
    int t; cin>>t;
    cin.ignore();
    while(t--)
    {
        string x, r= '"', s= '"';
        getline(cin,x);
        int m;
        int k=x.find("\"");
        for(int i=k+1; i<x.length(); i++)
        { if x[x+2]==32
        {
            m=i+2; break;
        }
         else r+=x[i];
        } 
        for(int i=m+1; i<x.length(); i++)
        { if(x[i]==32)
        {
            for (int j=i+1; j<x.length()-1; j++) s+=x[j];
            break;
        }
         }
        if(s.find(r)<0)|| s.find(r)>s.length()-1 cout<<-1;
        else if(r.length()==0) cout<<0; else cout<<s.find(r);
        cout<<endl;
    }
}
