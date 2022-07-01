#include<stdio.h>
#include<stdlib.h>

void interger_decimal_parts(float *n)
{
    int integer = (int)n;
    printf("%d", integer);
}

int main()
{
    float n;
    scanf("%f", &n);

    interger_decimal_parts(&n);

    return 0;
}
