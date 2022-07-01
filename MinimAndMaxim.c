#include<stdio.h>
#include<stdlib.h>

void minp_maxp(float *v, float *n, float *min, float *max)
{
    int i = 0;

    *min = v[0];
    *max = v[0];

    for(int i = 0; i < n; i++)
    {
        if(v[i] < *min)
            *min = v[i];
        if(v[i] > *max)
            *max = v[i];
    }
}


int main()
{
    int n;
    scanf("%d", &n);

    float a[n], min, max;
    for(int i = 0; i < n; i ++)
        scanf("%f", &a[i]);

    minp_maxp(a, n, &min, &max);
    printf("Min = %.2f and Max = %.2f", min, max);

    return 0;
}
