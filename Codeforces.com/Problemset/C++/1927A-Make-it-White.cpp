#include <iostream>
#include <string>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;

int solve(int n, string s)
{
    int first = -1, last = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'B') {
            if (first == -1) first = i;
            last = i;
        }
    }
    return last - first + 1;
    
}
int main(){
    fastio;
    int t, n; cin >> t;
    string s;
    while(t--) 
    {
        cin >> n >> s;
        cout << solve(n,s) << endl;
    }
    return 0;
}