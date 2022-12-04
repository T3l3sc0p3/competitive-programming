#include <iostream>
#define ll long long int
using namespace std;
string Searching(ll*arr,int n,ll x);
int main() {
    int n;
    ll x;
    cin >> n >> x;
    ll *arr = new ll [n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << Searching(arr,n,x) << endl;
    delete[]arr;
    return 0;
}
string Searching(ll*arr,int n,ll x)
{
    for (int i = 0; i < n; i++)
    {
        if (x == arr[i]) return "YES";
    }
    return "NO";
}