#include <stdio.h>

int main(void)
{
    int i = 0;   // �ݺ� Ƚ��
    int sum = 0; // ��
    int n = 0;   // �Է°� ����
    
    
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



