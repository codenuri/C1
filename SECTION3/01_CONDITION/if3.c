#include <stdio.h>

int main(void)
{
    int score = 0;
    
    printf("����� ������ �Է��� �ּ��� >> ");
    
    scanf("%d", &score);


    if ( score >= 70 )
    {
        printf("�հ� �Դϴ�.\n");    
        printf("�����մϴ�.\n"); 
    }
    else if ( score >= 61 )  // 61 ~ 70
    {
        printf("����躸����.\n"); 
    }
    else
    {
        printf("���հ� �Դϴ�.\n");    
    }




    printf("�����մϴ�.\n");
    
    return 0;
}




