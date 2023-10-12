#include <stdio.h>

int div( int a, int b )
{
    if ( b == 0 )
    {
        //printf("error\n");
        // 함수 실행을 끝낸다.
        return -1;
    }
    
    return a / b;
}

int main(void)
{    
    //int ret = div(10, 2);
    
    int ret = div(10, 0);
    
    if ( ret == -1 )
    {
        printf("error\n");
    }
    else
        printf("%d\n", ret);
    
    return 0;
}

