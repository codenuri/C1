#include <stdio.h>

// ȣ��(2) ->  ȣ��(1) -> ȣ��(0) -> return ;
// 3���      2���      1���     
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