#include <stdio.h>

int main(void)
{
    int score[15] = {0};
    
    
    for ( int i = 0; i < 15; i++ )
    {
        printf("%d번째 사람, %d번째 과목 : ",
                            i / 5 + 1, i % 5 + 1);
        
        scanf("%d", &score[i] );
    }
    
    // 2번째 사람의 4번째 과목을 출력하고 싶다.
    int i = 1; // 0부터 시작
    int j = 3; // 
    printf("%d\n", score[ i * 5 + j ] );
    
    
    return 0;
}