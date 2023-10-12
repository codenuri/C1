#include <stdio.h>

int main(void)
{
    int n = 0;
    
    switch( n )
    {
    case 1:
        printf("1\n");
        break;      // switch 블럭을 탈출하기 위해
        
    case 2:
        printf("1\n");
        break;                   
    }
    
    return 0;
}