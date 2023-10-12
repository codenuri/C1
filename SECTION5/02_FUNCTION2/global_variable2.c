#include <stdio.h>

int gret = 0;
int gx = 0;
int gy = 0;

void sum(void)
{
    for ( int i = gx; i <= gy; i++)
        gret = gret + i;
}

int main(void)
{
    scanf("%d", &gx);
    scanf("%d", &gy);

    sum();
    
    printf("%d\n", gret);
    
    return 0;
}

void foo()
{
    gret = 200;
}





