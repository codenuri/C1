#include <stdio.h>

int main(void)
{
    int num = 0;
    
    num = 10;
    
    printf("%d\n", num); // 10
    printf("%d\n", &num);// 
    printf("%x\n", &num);// 
    printf("%p\n", &num);// 

    printf("%d\n", sizeof num);
    printf("%d\n", sizeof(num));
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(double));
    
    return 0;
}




























