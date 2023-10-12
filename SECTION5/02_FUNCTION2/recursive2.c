#include <stdio.h>

void print_hello(int n)
{
    if ( n == 0 ) return;
    
    printf("hello\n");
    
    print_hello(n-1);
    
    return;
}

int main(void)
{
    print_hello(2);
    
    return 0;
}