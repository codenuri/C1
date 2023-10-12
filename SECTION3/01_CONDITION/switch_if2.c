#include <stdio.h>

int main(void)
{
    int n = 1;    
    scanf("%d", &n);  

    if ( n == 1 )
    { 
        printf("1\n");
    } 
    else if ( n == 2 )
    {
        printf("2\n");
    }
    else
    {
        printf("default\n");
    }   
    
    return 0;
}
