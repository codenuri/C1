#include <stdio.h>

int main(void)
{
    int count = 1;
    
    while( count <= 100 )
    {
        //printf("%d\n", count);
        
        if ( count % 2 == 1 )
            printf("%d\n", count);
            
        ++count;
    }
    
    return 0;
}