#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double n, p;
	cin >> n;
	p = (long long int)n;
	cout << ((abs(abs(n)-abs(p))<0.5)?p:(n<0)?-(abs(p)+1):p+1) << endl;
	return 0;
}