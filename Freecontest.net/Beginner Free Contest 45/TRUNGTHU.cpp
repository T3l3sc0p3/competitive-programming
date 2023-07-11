#include <iostream>
using namespace std;
int main() {
	int n, M, temp, min = 1000000, count = 0, sum = 0;
	cin >> n >> M;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		sum += temp;
		if (temp <= min) min = temp;
	}
	M -= sum;
	count += n-1;
	while (M>=0) {
		M -= min;
		count++;
	}
	cout << count << endl;
	return 0;
}