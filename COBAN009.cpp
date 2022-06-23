#include <iostream>
#include <string.h>
using namespace std;
int main(int argc, char const *argv[]){
    int t = 0;
    cin>>t;
    while(t-- > 0){
        string number = "";
        cin>>number;
        if(number[0]=='-'){
            cout<<number.length()-1<<endl;
        }else{
            cout<<number.length()<<endl;
        }
    }
return 0;
}
