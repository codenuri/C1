#include <stdio.h>

void print_hello(void)
{
    printf("hello\n");
    
    print_hello();
}

int main(void)
{
    print_hello();
    
    return 0;
}