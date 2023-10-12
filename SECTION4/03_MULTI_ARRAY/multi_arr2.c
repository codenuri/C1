#include <stdio.h>

int main(void)
{
    int total[5] = { 0};
    
    int score1[15] = {0};
    int score2[3][5] = {0}; // 5개짜리배열이 3개
    
    // 2번째사람 3번째 과목
    //score2[1][2] = 100;
    
    for ( int i = 0; i < 3; i++)
    {
        for ( int j = 0; j < 5; j++)
        {
            printf("사람 %d, 과목 %d : ", i+1, j+1);
            
            scanf("%d", &score2[i][j] );
        }
    }
    
    
    

    
    
    return 0;
}