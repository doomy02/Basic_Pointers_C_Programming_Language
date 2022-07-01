#include<stdio.h>
#include<stdlib.h>

void find_value(float* a, int n, float b)
{
    int ok = 0;

    for(int i = 0; i < n && ok == 0; i++)
        if(*a == b)
            ok = 1;
    if(ok)
        printf("%p", a);
    else
        return NULL;
}

int main()
{
    int n;
    scanf("%d", &n);

    float v[n];

    for(int i = 0; i < n; i++)
        scanf("%f", &v[i]);

    find_value(v, n, 2);

    return 0;
}
