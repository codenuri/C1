#include <stdio.h>

int main(void)
{
    int score[15] = {0};
    
    
    for ( int i = 0; i < 15; i++ )
    {
        printf("%d��° ���, %d��° ���� : ",
                            i / 5 + 1, i % 5 + 1);
        
        scanf("%d", &score[i] );
    }
    
    // 2��° ����� 4��° ������ ����ϰ� �ʹ�.
    int i = 1; // 0���� ����
    int j = 3; // 
    printf("%d\n", score[ i * 5 + j ] );
    
    
    return 0;
}