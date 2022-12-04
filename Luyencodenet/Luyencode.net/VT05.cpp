#include <iostream>
#define ll long long int
using namespace std;
int Counting(ll *arr, int n, int x);
int main(){
    int n;
    ll x;
    cin >> n >> x;
    ll *arr= new ll [n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << Counting(arr,n,x) << endl;
    delete[]arr;
    return 0;
}
int Counting(ll *arr, int n, int x)
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x) c++;
    }
    return c;
}