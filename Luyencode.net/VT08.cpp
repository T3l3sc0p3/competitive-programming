#include <iostream>
#include <cmath>
#define ll long long int
using namespace std;
void Modify(ll*arr,int n);
int main(){
    int n;
    cin >> n;
    ll *arr= new ll [n];
    for (int i = 0; i < n;i++) cin >> arr[i];
    Modify(arr,n);
    delete[]arr;
    return 0;
}
void Modify(ll*arr,int n)
{
    for (int i = 1; i < n; i+=2)
    {
        if (i == n - 1) arr[i]+=abs(arr[i-1]-0);
        else arr[i]+=abs(arr[i-1]-arr[i+1]);
    }
    for (int j = 0; j < n;j++) cout << arr[j] << " ";
}