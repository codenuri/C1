#include <stdio.h>

struct Point
{
    int x;
    int y;
};

int main(void)
{
    struct Point pt1 = {.x = 10, .y = 10};
    struct Point pt2 = { 10, 10};
    
    //struct Point pt3 = pt1 + pt2;
    struct Point pt3 = pt1;
    
    
    return 0;
}