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
                         // ù��° ����� �ּ�
    printf("%p\n", &arr); // �迭 �ּ�
    
    return 0;
}







