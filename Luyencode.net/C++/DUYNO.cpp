#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	while (getline(cin, s)) cout << ((s[0] == s[s.size()-1])?"YES":"NO") << endl;
	return 0;
}