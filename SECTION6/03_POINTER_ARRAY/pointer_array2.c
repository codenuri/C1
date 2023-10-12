#include <stdio.h>

int main(void)
{
    int x[5] = { 1,2,3,4,5};

    //int *p = &x[0];
    
    int *p = x; // x => &x[0] 암시적 형변환
    
    printf("%d\n", *p);     // p[0]
    printf("%d\n", *(p+1)); // p[1]
    printf("%d\n", *(p+2)); // p[2]
    printf("%d\n", *(p+3)); // p[3]
    printf("%d\n", *(p+4)); // p[4]
    
    p = 0; // ok
    x = 0; // error

    double d = 3.4;
    int    n = d;
        
    return 0;
}