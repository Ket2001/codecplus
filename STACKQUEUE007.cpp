#include<bits/stdc++.h>
using namespace std;
void DemDauNgoacNguocChieu()
{
    string str;
    cin>>str;
    stack<char> st;
    int count =0;
    for(int i=0; i<str.length(); i++){
        if(str[i]!= ')')
               st.push(str[i]);
               // cu moi lan lap gap ) ta xe xoa di 1 cap () neu str[i] khac ) se dua vao chuoi ve chi can lay s.size/2
    else 
    {
        if(st.size() == 0)
        {
            st.push('('); 
            count ++;// khi stack rong thi chuyen thanh ( nen ket qua cuoi cung se la count +st.size/2
        }
        else st.pop(); 
    }
    }
    cout<<count + st.size()/2<<endl;
}
int main()
{
    int t;cin>>t;
    cin.ignore();
    while(t--)
    {
        DemDauNgoacNguocChieu();
    }
    return 0;
}