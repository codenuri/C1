#include <stdio.h>

int main(void)
{
    int n = 0;
    
    scanf("%d", &n);
    
    if ( n % 2 == 0 )
        printf("짝수\n");
    else
        printf("홀수\n");
    
    return 0;    
}