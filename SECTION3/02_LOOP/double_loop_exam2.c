#include <stdio.h>

int main(void)
{
    int i = 0;
    int j = 0;
    
    while( i < 10)
    {
        j = 0; 
        
        //while ( j < i+1 )
        while ( j < 10 - i )
        {
            printf("*");
            ++j;
        }
        printf("\n");
        ++i;
    }   
    

    
    return 0;
}