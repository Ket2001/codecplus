#include <string>
#include <iostream>
 
using namespace std;
 
int stringToNum(char c)     // chuyen char sang so
{
    return c - '0';
}
 
char numToString(int n)     // chuyen so sang char
{
    return (char)(n+48);
}
 
void chuanHoa(string &a, string &b) // lam 2 xau co do dai bang nhau
{
    int l1 = a.length(), l2 = b.length();
    if (l1 >= l2)
    {
        b.insert(0, l1-l2, '0');    // chen vao dau cua b cac ky tu '0'
    }
    else
    {
        a.insert(0, l2-l1, '0');    // chen vao dau cua a cac ky tu '0'
    }
}
 
string sum(string a, string b)  // tong 2 so
{
    string s = "";
    chuanHoa(a,b);      // chuan hoa
    int l = a.length();
     
    int temp = 0;
    for (int i=l-1; i>=0; i--)   // duyet va cong
    {
        temp = stringToNum(a[i]) + stringToNum(b[i]) + temp;    // tinh tong tung doi mot
        s.insert(0,1,numToString(temp%10));         // gan phan don vi vao
        temp = temp/10;     // lay lai phan hang chuc
    }
    if (temp>0)  // neu hang chuc > 0 thi them vao KQ
    {
        s.insert(0,1,numToString(temp));
    } 
    return s;
}
 

int main(int argc, char **argv)
{
	int n;
    string a, b, s;
    cin>>n;
    for (int k=1; k<=n; k++)
    {
	
    cin>>a;
    cin>>b;
     
    s = sum(a,b);
    cout<<s<<endl;
    }

     
    return 0; 
}
