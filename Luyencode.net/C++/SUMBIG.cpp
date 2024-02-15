#include <iostream>
#include <string>
using namespace std;

string sumbig(string a, string b)
{
    string res = "";
    int sum, d = 0, i = a.length()-1, j = b.length()-1;
    while (i >= 0 || j >= 0 || d > 0) {
        sum = ((i >= 0)?a[i]-'0':0) + ((j >= 0)?b[j]-'0':0) + d;
        d = sum/10;
        res = to_string(sum%10)+res;
        i--; j--;
    }
    return res;
}

int main()
{
    string a, b;
    getline(cin, a);
    getline(cin, b);
    cout << sumbig(a, b) << endl;
    return 0;
}
