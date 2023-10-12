#include <stdio.h>

int main(void)
{
    int x[5] = { 1,2,3,4,5};
    
    int *p = x; // &x[0]
    
    
    *(p+1) = 0; // p[1] = 0
    p[1]   = 0; // 포인터의 배열식 표현

    *(x+1) = 0; // 배열의 포인터식 표현 x = 
    x[1]   = 0; 
    //*(++x) = 0;
    p = 0;
    //x = 0; // error
    
    ++p; // p = p + 1; ok
    //++x; // x = x + 1; error
    
        
    return 0;
}