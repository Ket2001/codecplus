#include <bits/stdc++.h>
using namespace std;

//add
string add(string a, string b)
{
    string result = "";
    while (a.length() < b.length()) a = "0" + a;
    while (b.length() < a.length()) b = "0" + b;
    int du = 0;

    for (int i = a.length() - 1; i >= 0; i--)
    {
        int soTrungGian = a[i] - 48 + b[i] - 48 + du;
        du = soTrungGian / 10;
        soTrungGian = soTrungGian % 10;
        result = (char)(soTrungGian + 48) + result;
    }
    if (du > 0) result = "1" + result;
    return result;
}

//mul
string mul(string a, string b)
{
    string result = "";
    int n = a.length();
    int m = b.length();
    int len = n + m - 1;
    int carry = 0;

    for (int i = len; i >= 0; i--)
    {
        int tmp = 0;
        for (int j = n - 1; j >= 0; j--)
            if (i - j <= m && i - j >= 1)
            {
                int a1 = a[j] - 48;
                int b1 = b[i - j - 1] - 48;
                tmp += a1 * b1;
            }
        tmp += carry;
        carry = tmp / 10;
        result = (char)(tmp % 10 + 48) + result;
    }
    while (result.length() > 1 && result[0] == '0') result.erase(0, 1);
    return result;
}


int main()
{
    string numOne, numLast;
    char sign;
    int testCase;

    ifstream fin;
    ofstream fout;

    fin.open("bignumber.in");
    fout.open("bignumber.out");

    fin >> testCase;

    while (testCase--) {

        fin >> numOne >> sign >> numLast;
        if (sign == '*')
        {
            fout << mul(numOne, numLast) << endl;
        }


        else if (sign == '+')
        {
            fout << add(numOne, numLast) << endl;
        }

    }


    fin.close();
    fout.close();


    return 0;
}
