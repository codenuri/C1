#include <stdio.h>

int main(void)
{
    int *p1 = 20; // error
    int *p2 = 0;  // ok.. 
    
    if ( p2 ==  0)
    {
        //....
    }
    
    int *p3 = 0; // C
    int* p3 = 0; // C++
    int * p3 = 0; // 
        
    int *p4, n;  // p4 ������, n�� ����(int)
    int* p4, n;
    
    return 0;
}