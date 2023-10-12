#include <stdio.h>

int main(void)
{
    int n;
    double d;  // 실수, 8바이트
    
    n = 10;
    d = 3.4;
    
    printf("n = %d\n", n); // n 값 출력(10진수)
    
    printf("n = %x\n", n); // n 값 출력(16진수)
    
    printf("d = %f\n", d); // d 값 출력
    
    printf("n = %d d = %f\n", n, d); // n 과 d 모두 출력
    
    printf("d = %d\n", d);
    
    
    printf("n = %d\n", n);
    printf("n = %4d\n", n);
    printf("n = %04d\n", n);
    return 0;
}










