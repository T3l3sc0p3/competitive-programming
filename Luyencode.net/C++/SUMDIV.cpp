#include <iostream>
#include <cmath>
#define ll long long int
using namespace std;

ll sumdiv(ll n)
{
    ll s = 0;
    for (ll i = 1; i <= sqrt(n); i++) s+=((!(n%i))?i+((i!=n/i)?n/i:0):0);
    return s;
}

int main()
{
	int t; cin >> t;
    ll n;
    while (t--)
    {
        cin >> n;
        cout << sumdiv(n) << endl;
    }
	return 0;
}