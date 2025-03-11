#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    for (int i = '0'; i <= '9'; i++)
    {
        int c = 0;
        for (int j = 0; j < strlen(s); j++)
        {
            if (s[j] == i) c++; 
        }
        printf("%d ", c);
    }
    free(s);
    return 0;
}