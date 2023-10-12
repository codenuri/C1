#include <stdio.h>

int add(int a, int b);  // 함수의 선언(declaration)


int main(void)
{
    int n = add(1);   // 함수 호출(function call)
    
    printf("%d\n", n);
    
    return 0;
}

int add(int a, int b) // 함수 정의 (definition)
{
    return a + b;
}




