#include <stdio.h>

int main(void)
{
    int total[5] = { 0};
    
    int score1[15] = {0};
    int score2[3][5] = {0}; // 5��¥���迭�� 3��
    
    // 2��°��� 3��° ����
    //score2[1][2] = 100;
    
    for ( int i = 0; i < 3; i++)
    {
        for ( int j = 0; j < 5; j++)
        {
            printf("��� %d, ���� %d : ", i+1, j+1);
            
            scanf("%d", &score2[i][j] );
        }
    }
    
    
    

    
    
    return 0;
}