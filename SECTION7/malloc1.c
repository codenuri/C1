#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 0;

	// int 한개(4byte) 크기의 메모리를 
	// 동적으로 할당하고 주소를 
	// 포인터 변수 p에 담는다.
	int* p = (int*)malloc(sizeof(int));

	n  = 10; // 지역변수는 변수 이름으로 접근
	*p = 10; // 동적할당된 변수는 주소를 사용해서 접근

	free(p); // 동적할당된 메모리는 더이상 필요없을때
			 // 반드시 파괴해야 합니다.
	return 0;
}			 // 지역변수 n은 이순간 자동으로 파괴됩니다.