#include <iostream>
#include <climits>
#define ll long long int
using namespace std;
int IndexMax(ll *arr,int n) {
    ll max = LONG_MIN,index;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] >= max)
        {
            max = arr[i];
            index = i;
        }
    }
    return index;
}
int main() {
    int n;
    cin >> n;
    ll *arr = new ll [n];
    cout << IndexMax(arr,n) << endl;
    delete[]arr;
    return 0;
}