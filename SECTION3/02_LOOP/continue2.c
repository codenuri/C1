#include <stdio.h>

int main(void)
{
    int n = 0;
    int sum = 0;
    int oddsum = 0;
    
    while ( 1 )
    {
        scanf("%d", &n);
        
        if ( n == -1 )
            break;
        
        sum = sum + n;
        
        if ( n % 2 == 1 )
        {
            printf("Ȧ��\n");
            oddsum = oddsum + n;
        }
    }
    
    printf("�� : %d\n", sum);
    printf("Ȧ���� : %d\n", oddsum);
    
    
    return 0;
}



