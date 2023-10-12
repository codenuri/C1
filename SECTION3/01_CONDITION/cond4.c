#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 10;
    
    //if ( a == 15 || ++b == 11 )
    if ( a == 10 && ++b == 11 )
        printf("true\n");
        
        
    printf("%d\n", b); // ???
        
    return 0;
}