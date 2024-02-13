#include <iostream>
#include <string>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

string solve(int n)
{
    int b, c = min(n-2, 26);
    n -= c;
    b = min(n-1, 26);
    return string(1, static_cast<char>(n-b+96)) + string(1, static_cast<char>(b+96)) + string(1, static_cast<char>(c+96));
}

int main()
{
    fastio;
    int t, n; cin >> t;
    while(t--)
    {
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}