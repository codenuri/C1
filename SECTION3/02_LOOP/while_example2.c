#include <stdio.h>

int main(void)
{
    int count = 1;
    
    //while( count <= 100 )
    
    while( count != 100 )
    {
        printf("%d\n", count);
            
        count += 2; // count = count + 2
    }
    
    return 0;
}