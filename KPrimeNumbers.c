#include<stdio.h>
#include<stdlib.h>

int main()
{
    int k;
    scanf("%d", &k);
    int *v = malloc(k * sizeof(int));

    *v = k;
    int i = 2, c = 1, kk = k;
    while(kk != 0)
    {
        int ok = 1;
        for(int j = 2; j < i; j++)
            if(i % j == 0)
                ok = 0;
        if(ok)
        {
            v[c++] = i;
            kk--;
            i++;
        }
        else
            i++;
    }

    for(int i = 0; i <= k; i++)
        printf("%d ", *(v + i));

    free(v);

    return 0;
}
