#include <stdio.h>

int main(void)
{
    int a = 1;
    int b = 2;
    
    int c = (a + b) * 3 + -2;
    int d = a + b + a - b;
            
    printf("%d\n", c);
    printf("%d\n", d);
    
    return 0;
}