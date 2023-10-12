
int g = 0; // 전역변수

void foo()
{
    int x = 0;
    g = 10;
    //...
    //n = 100; // error
}

int main(void)
{
    int n = 0;
    g = 10;
    foo();
        
    //x = 100; // error
    // ....
    
    foo();
    
    return 0;
}