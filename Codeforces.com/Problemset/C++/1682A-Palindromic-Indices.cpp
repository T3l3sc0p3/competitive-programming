#include <iostream>
#include <string>
using namespace std;
void solveA() {
    int n, count = 0;
    string s;
    cin >> n;
    cin >> s;
    if (n == 2) {
        cout << 2 << endl;
    }
    else {
        for (int i = (n+1)/2; i < n; i++) {
            if (s[i] == s[n/2]) {
                count += 2;
            }
            else {
                break;
            }
        }
        count += n % 2;
        cout << count << endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solveA();
    }
    return 0;
}