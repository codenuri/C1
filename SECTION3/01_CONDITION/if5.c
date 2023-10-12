#include <stdio.h>

int main(void)
{
    int score = 0;
    printf("당신의 점수를 입력해 주세요 >> ");
    scanf("%d", &score);


    if ( score >= 70 )
        printf("합격 입니다.\n");    
    else
        printf("불합격 입니다.\n");    
    

    printf("감사합니다.\n");

    return 0;
}




