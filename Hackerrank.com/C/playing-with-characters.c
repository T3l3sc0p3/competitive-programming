#include <stdio.h>
#include <string.h>
#define MAX 100

int main() 
{
    char ch, s[MAX], sen[MAX];
    scanf("%c%s",&ch,s);
    scanf("\n");
    scanf("%[^\n]%*c", sen);
    printf("%c\n%s\n%s",ch,s,sen);
    return 0;
}