#include <stdio.h>

int main(void)
{
    int i = 0;
    int j = 0;
    
    while( i < 10)
    {
        j = 0; // �ٽ� .
        
        while ( j < 10 )
        {
            printf("*");
            ++j;
        }
        printf("\n");
        ++i;
    }   
    

    
    return 0;
}