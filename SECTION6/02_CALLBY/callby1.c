#include <stdio.h>

void inc( int x ) 
{
    x = x + 1;
}

int main(void)
{
    int n = 10;
        
    inc(n); 
    
    printf("%d\n", n);  
    
    return 0;
}