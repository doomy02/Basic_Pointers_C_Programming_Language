#include<stdlib.h>
#include<stdio.h>

void time(int n, int* ps, int* pm, int* ph)
{
    int h = n / 3600;
    int m = (n - h * 3600) / 60;
    int s = n % 60;

    *ph = h;
    *pm = m;
    *ps = s;
}

int main()
{
    int n;
    printf("Time in seconds: ");
    scanf("%d", &n);

    int *ps, *pm, *ph;
    time(n, &ps, &pm, &ph);
    printf("H = %d M = %d S = %d", ph, pm, ps);

    return 0;
}
