#include <stdio.h>

int main() 
{
    int n, t, m; scanf("%d", &n); t = n*2-1;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t; j++)
        {
            m = i<j?i:j;
            m = m<t-i?m:t-i-1;
            m = m<t-j-1?m:t-j-1;
            printf("%d ", n-m);
        }
        printf("\n");
    }
    return 0;
}