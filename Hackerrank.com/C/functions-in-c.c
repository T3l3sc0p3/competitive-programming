#include <stdio.h>
int max_of_four(int a, int b, int c, int d)
{
    //Using bitwise operator
    int r,s;
    r = a^((a^b)&-(a<b));
    s = c^((c^d)&-(c<d));
    return r^((r^s)&-(r<s));
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    return 0;
}