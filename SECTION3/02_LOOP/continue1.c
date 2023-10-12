#include <stdio.h>

int main(void)
{
    int count = 0;
    
    while ( count < 10 )
    {
        ++count;
        printf("hello\n");
        
        continue;
        
        //break;
              
        printf("world\n");
        
//        ++count;
    }
    
    
    return 0;
}