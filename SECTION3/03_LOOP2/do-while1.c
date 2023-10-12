#include <stdio.h>

int main(void)
{
    int n = 0;
    
    while ( n > 0)
    {
        printf("while\n");
    }
    
    do
    {
        printf("do - while\n");
    } while ( n > 0);
    
    
    return 0;
}