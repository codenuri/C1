#include <stdio.h>

int main(void)
{
    double d = 3.4;

    int num = 10;
    
    int *pnum = &num; 
    
    printf("%d\n", num); // 10 
    printf("%p\n", pnum);// 2000  
    printf("%p\n", &pnum);// 3000
    
    printf("%d\n", *pnum);// 10  
    

    return 0;
}




