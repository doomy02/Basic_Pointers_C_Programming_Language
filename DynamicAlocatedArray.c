#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int *v = calloc(n, sizeof(int));

    for(int i = 0; i < n; i++)
        scanf("%d", v + i);

    for(int i = 0; i < n; i++)
        printf("%d ", *(v + i));

    free(v);

    return 0;
}
