#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n; long int l; char c; float f; double d;
    cin >> n >> l >> c >> f >> d;
    // Float up to 3 decimal places: %3f
    // Double up to 9 decimal places: %9lf
    printf("%d\n%ld\n%c\n%3f\n%9lf\n",n,l,c,f,d);
    return 0;
}