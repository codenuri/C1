#include <stdio.h>

void foo( int y[5] ) // int y[3] = x
{ 
    printf("%d\n", sizeof(y));
    
    cout << typeid(y).name() << endl;
    
}

int main(void)
{

    int x[3] = {1,2,3};
    //int y[3] = x;   // error
    
    foo( x );
    
    return 0;
}