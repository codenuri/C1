#include <stdio.h>

// 호출(2) ->  호출(1) -> 호출(0) -> return ;
// 3출력      2출력      1출력     
// return     return     return 


void print_number(int n)
{
    if ( n == 0 ) return ;
    
    print_number(n - 1);
        
        
    printf("%d\n", n);
    

    
    return ;
}
    

int main(void)
{
    print_number(3);
    

    
    
    return 0;
}