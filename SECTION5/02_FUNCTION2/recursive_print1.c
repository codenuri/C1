#include <stdio.h>


// 3���     2���    1���     return ;
// ȣ��(2)   ȣ��(1)  ȣ��(0)
// return    return   return 
void print_number(int n)
{
    if ( n == 0 ) return ;
    
    printf("%d\n", n);
    
    print_number(n - 1);
    
    return ;
}
    

int main(void)
{
    print_number(3);
    
//    print_number(2);
//    print_number(1);
    
    
    return 0;
}