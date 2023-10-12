#include <stdio.h>

void inc( int *p ) 
{
    ++(*p); // *p = *p + 1; 
}

int main(void)
{
    int n = 10;
        
    inc(&n); 
    
    printf("%d\n", n);  
    
    return 0;
}