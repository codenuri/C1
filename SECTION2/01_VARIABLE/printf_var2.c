#include <stdio.h>

int main(void)
{
    int n;
    double d;  // �Ǽ�, 8����Ʈ
    
    n = 10;
    d = 3.4;
    
    printf("n = %d\n", n); // n �� ���(10����)
    
    printf("n = %x\n", n); // n �� ���(16����)
    
    printf("d = %f\n", d); // d �� ���
    
    printf("n = %d d = %f\n", n, d); // n �� d ��� ���
    
    printf("d = %d\n", d);
    
    
    printf("n = %d\n", n);
    printf("n = %4d\n", n);
    printf("n = %04d\n", n);
    return 0;
}










