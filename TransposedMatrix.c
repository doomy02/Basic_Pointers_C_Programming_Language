#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int **a = malloc(n * sizeof(int*));
    for(int i = 0; i < n; i++)
        a[i] = calloc(m, sizeof(int));

    int **b = malloc(n * sizeof(int*));
    for(int i = 0; i < n; i++)
        b[i] = calloc(m, sizeof(int));

    for(int i = 0; i < n; i ++)
        for(int j = 0; j < m; j ++)
            scanf("%d", &a[i][j]);
    printf("\n");

    for(int i = 0; i < n; i ++)
        for(int j = 0; j < m; j ++)
            b[i][j] = a[j][i];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }

    for(int i = 0; i < n; i++)
    {
        free(a[i]);
        free(b[i]);
    }
    free(a);
    free(b);

    return 0;
}
