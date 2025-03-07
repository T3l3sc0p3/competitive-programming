#include <stdio.h>

void calculate_the_maximum(int n, int k) {
    int and = 0, xor = 0, or = 0, tmp, a, b;
    for (a = 1; a < n; a++)
    {
        for (b = a+1; b <= n; b++)
        {
            tmp = a&b;
            if (tmp > and && tmp < k) and = tmp; tmp = a|b;
            if (tmp > or && tmp < k) or = tmp; tmp = a^b;
            if (tmp > xor && tmp < k) xor = tmp;
        }
    }
    printf("%d\n%d\n%d", and, or, xor);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}