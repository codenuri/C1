#include <stdio.h>

int main()
{
    int    n = 0;
    double d = 0;
    
    int arr[5] = {1,2,3,4,5};
    
    printf("%d\n", sizeof(n) ); // 4
    printf("%d\n", sizeof(d) ); // 8
    
    printf("%d\n", sizeof(arr) ); // 20    
    printf("%d\n", sizeof(arr)/sizeof(arr[0]) ); // 5

    
    printf("%d\n", n);      // 0
    printf("%d\n", arr[0]); // 1
    
    printf("%p\n", arr); // 1,2,3,4,5
                         // 첫번째 요소의 주소
    printf("%p\n", &arr); // 배열 주소
    
    return 0;
}







