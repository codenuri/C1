#include <stdio.h>

int main(void)
{
    int j = 1;
    
    while ( j <= 9 )
    {
        printf("2 * %d = %d\n", j, 2 * j);
        ++j;
    }
    
    return 0;
}