#include <iostream>
#define ll long long int
using namespace std;

int sumdig(ll n)
{
    int s = 0;
    while (n != 0)
    {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int main()
{
	ll t, n; cin >> t;
    while (t--)
    {
        cin >> n;
        cout << sumdig(n) << endl;
    }
	return 0;
}