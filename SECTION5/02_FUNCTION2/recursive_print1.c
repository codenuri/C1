#include <stdio.h>


// 3출력     2출력    1출력     return ;
// 호출(2)   호출(1)  호출(0)
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