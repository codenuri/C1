#include <stdio.h>

int main(void)
{
    int score = 0;
    
    scanf("%d", &score);

    
    // 3 + 4 * 5
    
    if ( 80 <= score >= 71 )
    {
        printf("71 ~ 80\n");
    }   

    
    // ������ 71 ~ 80 �� �������� �����ϰ� �ʹ�

/*
    if ( score >= 71 && score <= 80 )
    {
        printf("71 ~ 80\n");
    }   
*/

/*
    if ( score >= 71 )
    {
        if ( score <= 80 )
        {
            printf("71 ~ 80\n");
        }
    }   
*/        
    return 0;
}





