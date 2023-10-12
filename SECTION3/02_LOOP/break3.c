#include <stdio.h>

int main(void)
{
    int n = 0;
    int sum = 0;
    
    while ( 1 ) // 무한 루프
    {
        scanf("%d", &n);
        
        if ( n == -1 )
            break;
            
        sum = sum + n;
    }
    
    
    printf("합 : %d\n", sum);
    
    
    return 0;
}