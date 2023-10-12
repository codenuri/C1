#include <stdio.h>

int main(void)
{
    int i = 0;   // 반복 횟수
    int sum = 0; // 합
    int n = 0;   // 입력값 저장
    
    
    for ( i = 0; i < 10; i++)
    {
        //int n = 0;
        
        scanf("%d", &n);
        sum = sum + n;
    }
    //n = 10;
    
    printf("%d\n", sum);
    
    return 0;
}



