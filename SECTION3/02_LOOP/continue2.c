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
            printf("È¦¼ö\n");
            oddsum = oddsum + n;
        }
    }
    
    printf("ÇÕ : %d\n", sum);
    printf("È¦¼öÇÕ : %d\n", oddsum);
    
    
    return 0;
}



