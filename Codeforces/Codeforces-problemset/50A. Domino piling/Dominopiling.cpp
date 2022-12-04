#include <iostream>
 
using namespace std;
 
int main() {
	int m, n, k = 1;
	cin >> m >> n;
	if (m <= 1 && n <= 1) {
		cout << 0 << endl;
		return 0;
	}
	int *A = new int[(m * n)+1];
	for (int i = 0; i < (m * n); i+=2) {
		A[i] = k;
		A[i + 1] = k;
		k++;
	}
	cout << A[(m * n) - 2] << endl;
	return 0;
}