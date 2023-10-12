int main(void)
{
    int a;     // 쓰레기 값
    int b = 0; 
    
    int x1[5]; // 5개가 모두 쓰레기값
    
    int x2[5] = {1,2,3,4,5};
    
    int x3[5] = {1,2,3}; // 1,2,3, 0, 0
    
    int x4[5] = {1,2,3,4,5,6}; // error
    
    return 0;
}