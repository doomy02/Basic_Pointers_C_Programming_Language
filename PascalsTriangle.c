#include<stdlib.h>
#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int **a = calloc(n, sizeof(int*));
    for(int i = 0; i < n; i++)
        a[i] = calloc(n, sizeof(int));

    a[0][0] = 1;
    for(int i = 1; i < n; i++)
    {
        a[i][0] = 1;
        for(int j = 1; j <= i; j++)
        {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < n; i++)
        free(a[i]);
    free(a);

    return 0;
}
