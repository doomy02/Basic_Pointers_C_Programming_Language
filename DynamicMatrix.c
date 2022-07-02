#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    float **a = malloc(n * sizeof(float*));
    for(int i = 0; i < n; i++)
        a[i] = calloc(m, sizeof(float));

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            a[i][j] = (float)1 / (i + j + 1);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            printf("%.2f ", a[i][j]);
        printf("\n");
    }

    for(int i = 0; i < n; i++)
        free(a[i]);
    free(a);

    return 0;
}
