#include <stdio.h>

int main(void)
{
    // 5개의 메모리, 서로 다른 이름.
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    
    int x[5]; // 배열
    
    x[0] = 0;
    x[1] = 0;
    x[2] = 0;
    x[3] = 0;
    x[4] = 0;
    
    for ( int i = 0; i < 5; i++)
    {
        scanf("%d", &x[i] );
    }
    // 

    return 0;
}













