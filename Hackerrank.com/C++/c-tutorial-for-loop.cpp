#include <iostream>
#include <cstdio>

using namespace std;

void convert_number(int n);

int main() {
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++) convert_number(i);
    return 0;
}

void convert_number(int n){
    switch (n){
    case 1: cout << "one" << endl; break;
    case 2: cout << "two" << endl; break;
    case 3: cout << "three" << endl; break;
    case 4: cout << "four" << endl; break;
    case 5: cout << "five" << endl; break;
    case 6: cout << "six" << endl; break;
    case 7: cout << "seven" << endl; break;
    case 8: cout << "eight" << endl; break;
    case 9: cout << "nine" << endl; break;
    default: cout << (!(n%2) ? "even" : "odd") << endl; break;
    }
}
