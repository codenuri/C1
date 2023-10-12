#include <stdio.h>

int main(void)
{
    int n1 = 10;
        
    printf("%d, %d\n", n1, n1 + 1); // 10, 11

    
    int x[5] = {1,2,3,4,5};
    
    int n  = x[1];
    int *p = &x[1];
    
    printf("%p %p\n", p, p + 1);  
    
    return 0;   
}