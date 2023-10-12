#include <stdio.h>

int main(void)
{
    print_logo();
    
    int n = 0;
    scanf("%d", &n);
    
    int ret = factorial(n);
    
    print_prime_number(ret);
    
    return 0;
}
