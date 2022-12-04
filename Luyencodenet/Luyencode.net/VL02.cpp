//Practice algorithm so I won't use loops to solve VL* problems ;)
#include <iostream> 
#define ll long long int
using namespace std;
int main() {
	ll n, s = 0;
	cin >> n;
	s = ((1 + n) * n) / 2;
	cout << s << endl;
	return 0;
}