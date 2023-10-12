#include <stdio.h>

int main(void)
{
    int num1  = 10;
    int num2  = 20;
    int *pnum = &num1;
    
    // 다음중 에러를 모두 고르세요    
    //pnum = 20;      // error
    pnum = &num2;   // ok
          
    num2 = 100;     // ok
    //num2 = &num1;   // error    
    
    *pnum = 200;    // ok
    //*num2 = 100;    // error    
    
    // 아래 코드의 결과를 예측해 보세요.
    printf("%d\n", num1);   // 10
    printf("%d\n", num2);   // 200
    printf("%p\n", &num1);  // 1000
    printf("%p\n", &num2);  // 2000
    printf("%p\n", &pnum);  // 3000
    printf("%p\n", pnum);   // 2000
    printf("%d\n", *pnum);  // 200
    return 0;
}







