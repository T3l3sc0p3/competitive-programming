#include <iostream>
#include <climits>
#include <algorithm>
#define ll long long int
using namespace std;

int main()
{
    int n; cin >> n;
    ll *arr = new ll[n], max = LONG_LONG_MIN, min = LONG_LONG_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    cout << max - min;
    delete[] arr;
    return 0;
}