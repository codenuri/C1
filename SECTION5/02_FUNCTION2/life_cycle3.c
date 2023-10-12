#include <stdio.h>

int g;

void foo()
{
    int x;
    //g = 100;
}

int main(void)
{
    int n = 0;

    foo();
    
    printf("%d\n", g); // 0

    return 0;
}