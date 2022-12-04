#include <iostream>
#define ll long long int
#define MAX 10
using namespace std;
bool Searching(ll arr[MAX], ll _11);
int main(){
    ll arr[MAX],_11;
    for (int i = 0; i < MAX;i++) cin >> arr[i];
    cin >> _11;
    if(!Searching(arr,_11)) cout << -1 << endl;
    return 0;
}
bool Searching(ll arr[MAX], ll _11)
{
    int count = 0;
    for (int i = 0; i < MAX; i++)
    {
        if (arr[i] == _11)
        {
            cout << i+1 << " ";
            count++;
        }
    }
    if (count != 0){
        return true;
    }
    return false;
}