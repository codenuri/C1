#include <stdio.h>

int sum( int n )
{
    int s = 0;

    for( int i = 0; i <= n; i++)
    {
        s = s + i;
    }    
    return s;    
}

int main(void)
{
    int n = 0;
    scanf("%d", &n);
    
    int ret = sum(n);
    
    printf("%d\n", ret);
    
    return 0;
}




