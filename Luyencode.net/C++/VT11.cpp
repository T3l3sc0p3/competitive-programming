#include <iostream>
#include <algorithm>
#define ll long long int
using namespace std;

int main()
{
    int n; cin >> n;
    ll *arr = new ll[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr + 1, arr + n - 1);
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    delete[] arr;
    return 0;
}