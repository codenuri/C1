// 1. 전역변수
// 프로그램이 종료 될때 까지 파괴되지 않습니다.
int g = 0;              

void foo(void)
{
    // 2. static 지역변수
    // 프로그램이 종료 될때 까지 파괴되지 않습니다.
    static int s = 0;   
    
    // 3. 지역변수 
    // 함수 호출이 종료될때 파괴 됩니다.
    int n = 0;   
}

int main(void)
{
    foo();

    return 0;
}



















