#include <stdio.h>

int main(void)
{
    int x[5] = { 1,2,3,4,5};
        
    printf("%d\n", x[0]);
    printf("%d\n", x[1]);
    printf("%d\n", x[2]);
    printf("%d\n", x[3]);
    printf("%d\n", x[4]);    
    
    int *p = &x[0];

    printf("%d\n", *p);
    printf("%d\n", *(p+1));
    printf("%d\n", *(p+2));
    printf("%d\n", *(p+3));
    printf("%d\n", *(p+4));
    

    printf("%d\n", p[0]);
    printf("%d\n", p[1]);
    printf("%d\n", p[2]);
    printf("%d\n", p[3]);
    printf("%d\n", p[4]);
    
    return 0;
}