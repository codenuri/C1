#include <stdio.h>

int main()
{
    int count = 0;

    while( count < 10 )
    {
        printf("hello\n");
        
        ++count;
    }
    
    for ( count = 0; count < 10; ++count)
        printf("hello\n");
    

    return 0;
}