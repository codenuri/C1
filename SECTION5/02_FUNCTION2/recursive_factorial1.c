#include <stdio.h>

int factorial(int n)
{
    int s = 1;
    
    for ( int i = 1; i <= n; i++ )
        s = s * i;
        
    return s;
}

int main(void)
{
    int ret = factorial(5); // 5 * 4 * 3 * 2 * 1
    
    printf("%d\n", ret);
    
    return 0;
}