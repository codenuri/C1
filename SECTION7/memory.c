// 1. 전역변수 
//    static 메모리 사용
int g = 0;

void foo(void)
{
	// 2. 지역변수
	//    stack 메모리 사용
	int n = 0;

	// 3. 동적메모리 할당
	//    heap 메모리 사용
	// 단, p 자체는 는 지역변수이므로
	// stack 메모리 사용
	int* p = (int*)malloc(20);

	free(p);
}
int main(void)
{
	foo();

	// "hello" 는 상수 메모리에 존재
	printf("hello");

	return 0;
}