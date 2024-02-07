#include <iostream>
#include <vector>
#define ll long long int
using namespace std;

int main()
{
    vector<ll> arr;
    ll tmp;
    while (true)
    {
        cin >> tmp;
        if (tmp == 0) break;
        arr.push_back(tmp);
    }
    bool check = false;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr.at(i) < 0)
        {
            cout << arr[i] << " ";
            check = true;
        }
    }
    if (!check) cout << "NOT FOUND";
    return 0;
}