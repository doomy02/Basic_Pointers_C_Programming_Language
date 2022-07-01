#include<stdio.h>
#include<stdlib.h>

void sum(int* v, int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += *(v + i);

    printf("%d", sum);
}

int main()
{
    int n;
    scanf("%d", &n);

    int v[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &v[i]);

    sum(v, n);

    return 0;
}
