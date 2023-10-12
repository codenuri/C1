#include <stdio.h>

int main(void)
{
    int i = 2;
    int j = 1;

    
    while( i <= 9 )
    {
        j = 1; // ÇÙ½É..
        
        while ( j <= 9 )
        {
            printf("%d * %d = %d\n", i, j, i * j);
            ++j;
        }
         // j = 10
        ++i;
    }

    

    

    
    return 0;
}