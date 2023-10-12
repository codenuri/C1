#include <stdio.h>

int main(void)
{
    int x[5] = {1,2,3,4,5};
    
    int *p1 = &x[1];
    int *p2 = &x[3];
    
    printf("%p\n", p1 + 1);  // ok. 4바이트 증가
    //printf("%p\n", p1 + p2); // error. 

    printf("%p\n", p1 - 1);  // ok. 4바이트 감소
    printf("%d\n", p2 - p1); // ok. 2
    
    //printf("%p\n", p2 * 1);  // error
    //printf("%p\n", p2 * p1); // error

    //printf("%p\n", p2 / 1);  // error
    //printf("%p\n", p2 / p1); // error

    return 0;   
}