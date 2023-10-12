#include <stdio.h>

int main(void)
{
    int x[6] = { 1,2,3,4,5,6};
    
    int y1[3][2]= { 1,2,3,4,5,6}; // ok
    int y2[3][2]= { {1,2},{3,4},{5,6}}; // ok
    int y3[3][2]= { 0};
    //int y4[3][2]= { 1,2,3,4,5,6, 7}; //error
    
    return 0;   
}