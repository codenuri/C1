#include <stdio.h>

int main(void)
{
    int count = 0;
    
    while( count < 10 )
    {
        printf("hello\n");

        if ( count == 5 )
            break;
            
        //break;  // 반복문을 탈출해달라.
        
        ++count;
    }


    return 0;
}