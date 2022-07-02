#include<stdio.h>
#include<stdlib.h>

int main()
{
    int k, j = 1, c = 0;
    scanf("%d", &k);
    int *v = malloc(k * sizeof(int));

    for(int i = 2; i <= k; i++)
    {
        if(k % i == 0)
        {
            c++;
            *(v + j) = i;
            j++;
        }
    }

    *v = c;

    for(int i = 0; i <= c; i++)
        printf("%d ", *(v + i));

    free(v);

    return 0;
}
