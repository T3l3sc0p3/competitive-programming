#include <iostream>
using namespace std;
int** initial_input(int** arr, int n, int m);
bool check(int** arr, int n, int m);
int** release(int** arr, int n);
int main() {
	int n, m;
	cin >> n >> m;
	int **arr = new int*[n];
	initial_input(arr,n,m);
	if (check(arr, n, m)) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	release(arr, n);
	arr = nullptr;
	return 0;
}
int** initial_input(int** arr, int n, int m) {
	char inp;
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[m];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> inp;
			arr[i][j] = inp - '0';
		}
	}
	return arr;
}
bool check(int** arr, int n, int m) {
	int row;
	for (int i = 0; i < n; i++)
	{
		if (i >= 1 && arr[i][0] == row) {
			return false;
		}
		row = arr[i][0];
		for (int j = 0; j < m; j++)
		{
			if (row != arr[i][j]) {
				return false;
			}
		}
	}
	return true;
}
int** release(int** arr, int n) {
	for (int i = 0; i < n; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	return arr;
}
