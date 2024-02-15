#include <iostream>
#include <string>
using namespace std;

int demtu(string s)
{
	int c = 0;
	for (auto i = 0u; i < s.size()-1; i++)
	{
		if (s[i] == ' ' && s[i+1] != ' ') c++;
	}
	return ((s[0] == ' ')?c:c+1);
}

int main()
{
	string s;
	while (getline(cin, s)) cout << demtu(s) << endl;
	return 0;
}