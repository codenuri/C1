#include <stdio.h>

int cnt = 0;

int get_wait_number(void)
{
    //int cnt = 0;
    ++cnt;
    return cnt;
}

int main(void)
{
    int n = get_wait_number();
    
    printf("%d\n", n);  // 1
    
    printf("%d\n", get_wait_number()); // 2
    
    //cnt = 0;
    
    printf("%d\n", get_wait_number()); // 3
    printf("%d\n", get_wait_number()); // 4
    

    return 0;
}




