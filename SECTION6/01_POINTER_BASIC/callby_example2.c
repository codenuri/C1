#include <stdio.h>

void add(double xr, double xi, double yr, double yi,
         double *pr, double *pi)
{
    *pr = xr + yr;
    *pi = xi + yi;
}

int main(void)
{
    double ar = 1, ai = 1; // 1 + 1i
    double br = 2, bi = 2; // 2 + 2i
    double sr = 0, si = 0;
    
    add( ar, ai, br, bi, &sr, &si);
    
    printf("%f + %f\n", sr, si);
    return 0;
}