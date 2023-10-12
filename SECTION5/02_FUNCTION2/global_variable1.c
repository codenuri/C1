#include <stdio.h>

// a ~ b 까지의 합을 구하는 함수
int sum(int a, int b)
{
    int s = 0;
    
    for ( int i = a; i <= b; i++)
        s = s + i;
        
    return s;
}

int main(void)
{
    int x = 0, y = 0;
    
    scanf("%d", &x);
    scanf("%d", &y);

    int ret = sum(x, y);
    
    printf("%d\n", ret);
    
    return 0;
}