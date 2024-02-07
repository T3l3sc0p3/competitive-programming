#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int
using namespace std;

int main()
{
    int n; cin >> n;
    vector<ll> arr;
    ll tmp;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        arr.push_back(tmp);
    }
    sort(arr.begin(), arr.end());
    cout << max(arr.at(0) * arr.at(1) * arr.at(n-1), arr.at(n-1) * arr.at(n-2) * arr.at(n-3));
    return 0;
}