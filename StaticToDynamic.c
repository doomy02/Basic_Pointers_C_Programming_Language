#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];
    int **b = calloc(n, sizeof(int*));
    for(int i = 0; i < n; i++)
        b[i] = calloc(m, sizeof(int));

    for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                scanf("%d", &a[i][j]);
    printf("\n");

    for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                b[i][j] = a[i][j];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }

    for(int i = 0; i < n; i++)
        free(b[i]);
    free(b);

    return 0;
}
