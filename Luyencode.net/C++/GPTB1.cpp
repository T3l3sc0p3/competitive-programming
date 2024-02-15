#include <iostream>
#include <iomanip>
#define ll long long int
using namespace std;

int main()
{
    ll a1, b1, c1, a2, b2, c2, d, dx;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    d = a1*b2-a2*b1;
    dx = c1*b2-c2*b1;
    if (d)
    {
        cout << fixed << setprecision(2) << (double)dx/d << " " << (double)(a1*c2-a2*c1)/d << endl;
    }
    else if (!dx)
    {
        cout << "VOSONGHIEM" << endl;
    }
    else
    {
        cout << "VONGHIEM" << endl;
    }
    return 0;
}