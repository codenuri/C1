#include <stdio.h>

int main(void)
{
    int count = 0;
    
    while( count < 10 )
    {
        printf("hello\n");

        if ( count == 5 )
            break;
            
        //break;  // �ݺ����� Ż���ش޶�.
        
        ++count;
    }


    return 0;
}