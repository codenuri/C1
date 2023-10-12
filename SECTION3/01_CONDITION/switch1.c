#include <stdio.h>

int main(void)
{
    int n = 1;

    scanf("%d", &n);


    switch( n )
    {
    case 1: 
        printf("1\n");
        printf("one\n");
        break;
        
    case 2: 
        printf("2\n");
        break;   
        
    default: 
        printf("default\n");
        break;         
    }


/*
    if ( n > 1 )
    {
    }
    else
    {
    }
*/
    return 0;
}
