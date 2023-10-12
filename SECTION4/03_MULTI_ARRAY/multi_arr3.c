#include <stdio.h>

int main(void)
{
    int x1[12]      = {0};
    int x2[2][6]    = {0};
    int x3[3][4]    = {0};
    int x4[2][3][2] = {0};
    
    // 7번째 요소에 접근
    x1[6] = 0;
    x2[1][0] = 0;
    x3[1][2] = 0;
    x4[1][0][0] = 0;
    
    return 0;
}
