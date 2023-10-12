#include <stdio.h>

int main(void)
{
    int n = 4;
    
    printf("%d\n", n);   // 4
    printf("%d\n", 3);   // 3
    printf("%d\n", 3+3); // 6
    
    printf("%d\n", 10 / 3); // 3
    printf("%d\n", 10 % 3); // 1
    printf("%d\n", n % 2);  // 0
    
    n += 1; // n = n + 1
    
    printf("%d\n", n); // 5
    
    return 0;    
}