#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, tmp; cin >> n;
    vector<int>arr;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        arr.push_back(tmp);
    }
    sort(arr.begin(), arr.end(), greater<int>());
    for (int i = 0; i < n; i++)
    {
        cout << arr.at(i) << " ";
    }
    return 0;
}