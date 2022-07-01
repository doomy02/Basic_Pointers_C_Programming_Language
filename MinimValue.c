#include<stdio.h>
#include<stdlib.h>

void minp(float* a, float b)
{
    if(*a > b)
        *a = b;
}

int main()
{
    int n;
    scanf("%d", &n);

    float v[n];

    for(int i = 0; i < n; i ++)
        scanf("%f", &v[i]);

    for(int i = 0; i < n; i ++)
        minp(v, *(v + i));

    printf("The min value is: %.2f", v[0]);
    return 0;
}
