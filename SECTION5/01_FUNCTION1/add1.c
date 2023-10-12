#include <stdio.h>

int add(int a, int b)
{
    int c = a + b;
    return c;
}

int main(void)
{
    //int a = 1;
    
    int ret = 0;
    
    ret = add(1, 2);
    
    printf("%d\n", ret);
    
    return 0;
}