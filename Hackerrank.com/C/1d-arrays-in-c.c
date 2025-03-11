#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, s = 0, *arr; scanf("%d", &n);
    arr = (int*)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        s += arr[i];
    }
    printf("%d", s);
    free(arr);
    return 0;
}