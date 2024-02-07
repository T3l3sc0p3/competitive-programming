#include <iostream>
#include <climits>
#include <vector>
#define ll long long int
using namespace std;

int main()
{
    int n; cin >> n;
    vector<ll>arr, tmp;
    ll max = LONG_LONG_MIN, t;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        arr.push_back(t);
    }
    arr.push_back(arr.at(0));
    for (int i = 0; i < n; i++)
    {
        t = arr.at(i) + arr.at(i+1);
        if (t > max)
        {
            max = t;
            tmp = {arr.at(i), arr.at(i+1)};
        }
        else if (t == max)
        {
            if (arr.at(i) > tmp.at(0)) tmp = {arr.at(i), arr.at(i+1)};
        }
    }
    cout << tmp[0] << " " << tmp[1];
    return 0;
}