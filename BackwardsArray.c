#include<stdio.h>
#include<stdlib.h>

void BackwardsArray(int* a, int n)
{
    for(int i = 0; i <= n / 2; i++)
    {
        int aux = *(a + i);
        *(a + i) = *(a + n - i);
        *(a + n - i) = aux;
    }

    for(int i = 1; i <= n; i++)
        printf("%d ", a[i]);
}

int main()
{
    int n;
    scanf("%d", &n);

    int v[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &v[i]);

    BackwardsArray(v, n);

    return 0;
}
