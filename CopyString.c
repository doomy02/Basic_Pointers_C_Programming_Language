#include<stdio.h>
#include<stdlib.h>

void CopyString(char* a, char* b)
{
    while(*a)
    {
        *b = *a;
        a++;
        b++;
    }
    *b = '\0';
}

int main()
{
    char s1[100];
    char s2[100];
    scanf("%s", &s1);

    CopyString(s1, s2);
    printf("%s", s2);

    return 0;
}
