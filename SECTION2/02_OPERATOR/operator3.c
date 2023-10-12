#include <stdio.h>

int main(void)
{
    int n1 = 10;
    int n2 = 10;
    
    int a = ++n1;  // n1 : 11, a : 11
    int b = n2++;  // n2 : 11, b : 10
    
    printf("%d\n", n1); // 11
    printf("%d\n", n2); // 11
    printf("%d\n", a);  // 11
    printf("%d\n", b);  // 10
    
    n1 = 10;
    n2 = 10;
    
    int c = 10 + ++n1 + 5; // 10 + 11 + 5   
    int d = 10 + n2++ + 5; // 10 + 10 + 5
    
    printf("%d\n", c); // 26
    printf("%d\n", d); // 25
    
    // 변수를 1증가 방법
    n1 = n1 + 1;
    n1 += 1;
    ++n1;
    n1++;
    
    
    
    return 0;
}
























