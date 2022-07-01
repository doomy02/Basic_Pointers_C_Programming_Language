#include<stdio.h>
#include<stdlib.h>

void LeftShiftArray(int* a, int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        int aux = *(a + i);
        *(a + i) = *(a + i + 1);
        *(a + i + 1) = aux;
    }

    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
}

int main()
{
    int n;
    scanf("%d", &n);

    int v[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &v[i]);

    LeftShiftArray(v, n);

    return 0;
}
