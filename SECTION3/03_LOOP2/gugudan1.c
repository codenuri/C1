#include <stdio.h>

int main()
{
    int i = 2;
    int j = 1;
    
    while ( i <= 9 )
    {
        j = 1;  // �ٽ�
        while ( j <= 9)
        {
            printf("%d * %d = %d\n",i, j, i * j);
            ++j;
        }
        
        ++i;
    }   


    
    return 0;
}