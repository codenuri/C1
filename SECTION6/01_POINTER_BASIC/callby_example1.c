#include <stdio.h>

void swap(int *px, int *py)
{
    //py = px;
    
    int temp = *py;
    *py = *px;
    *px = temp;
}

int main(void)
{
    int x = 10;
    int y = 20;
    
    swap(&x, &y);
    
    printf("%d\n", x); // 20
    printf("%d\n", y); // 10
    
    return 0;
}