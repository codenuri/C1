#include <stdio.h>

int factorial(int n)
{
    if ( n == 1 ) return 1;
    
    return n * factorial(n-1);
}

int main(void)
{
    int ret = factorial(5);
            //  5 * factorial(4)
            //      4 * factorial(3)
            //          3 * factorial(2)
            //              2 * factorial(1)
            //                  1
    
    printf("%d\n", ret);
    
    return 0;
}