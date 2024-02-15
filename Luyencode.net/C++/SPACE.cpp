#include <iostream>
#include <string>
using namespace std;

int space(string s)
{
	int c = 0;
	for (auto i = 0u; i < s.size(); i++)
	{
		if (s[i] == ' ' && s[i+1] != ' ') c++;
	}
	return c;
}

int main()
{
	int t; cin >> t;
	cin.ignore();
	string s;
	while (t--)
	{
		getline(cin, s);
		cout << space(s) << endl;
	}
	return 0;
}