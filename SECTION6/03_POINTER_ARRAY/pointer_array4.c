#include <stdio.h>

int main(void)
{
    int x[5] = {1,2,3,4,5};
    
    printf("%p %p\n", x, x + 1); // &x[0]
    
    printf("%p %p\n", &x, &x + 1); // 배열의 주소.
    
    
    return 0;
}