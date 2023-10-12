#include <stdio.h>

int main(void)
{
    int    n = 0;
    double d = 3.4;
    
    int    *pn = &n;
    double *pd = &d;
    
    printf("%d\n", sizeof n );   // 4
    printf("%d\n", sizeof(d) );  // 8
    printf("%d\n", sizeof(pn) ); // 4
    printf("%d\n", sizeof(pd) ); // 4 
    
    return 0;    
}