#include <iostream>
using namespace std;
char **two_dimensional_array_input(char **arr,int n, int m);
void reduce_dot(char **arr, int n, int m, int& be, int& en);
void two_dimensional_array_output(char **arr, int n, int be ,int en);
char **release(char **arr, int n);
int main() {
	int n, m;
	cin >> n >> m;
	int be = 51, en = 0;
	char **arr = new char *[n];
	two_dimensional_array_input(arr,n, m);
	reduce_dot(arr, n, m,be,en);
	two_dimensional_array_output(arr, n,be, en);
	release(arr, n);
	arr = nullptr;
	return 0;
}
char **two_dimensional_array_input(char **arr,int n, int m) {
	for (int i = 0; i < n; i++)
	{
		arr[i] = new char[m];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}
	return arr;
}
void reduce_dot(char **arr, int n, int m, int &be, int &en) {
	for (int i = 0; i < n; i++)
	{
		for (int f = 0; f < m; f++)
		{
			if (arr[i][f] == '*' && be > f) {
				be = f;
				break;
			}
		}
		for (int j = m-1; j >= 0; j--)
		{
			if (arr[i][j] == '*' && en < j) {
				en = j;
				break;
			}
		}
	}
}
void two_dimensional_array_output(char **arr, int n, int be, int en) {
	bool check = false;
	for (int i = n-1; i >= 0; i--)
	{
		for (int j = be; j <= en; j++)
		{
			if (arr[i][j] == '*') {
				check = true;
				break;
			}
		}
		if (check == false) {
			n -= 1;
		}
	}
	check = false;
	for (int i = 0; i < n; i++)
	{
		if (check == false) {
			for (int f = be; f <= en; f++) {
				if (arr[i][f] == '*') {
					check = true;
					break;
				}
			}
		}
		if (check) {
			for (int j = be; j <= en; j++)
			{
				cout << arr[i][j];
			}
			cout << endl;
		}
	}
}
char **release(char **arr, int n) {
	for (int i = 0; i < n; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	return arr;
}