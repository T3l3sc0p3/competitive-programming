#include <iostream>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;

int main() {
    fastio;
    int t, n; cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        cout << ((n % 3 == 0)?"Second":"First") << endl;
    }
    return 0;
}