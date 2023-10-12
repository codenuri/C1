#include <stdio.h>
#include <stdlib.h>

int main()
{
	// 동일하게 40 바이트를 할당하지만
	int*    p1 = (int*)malloc(40);    // int[10] 처럼 사용하겠다는 의도
	double* p2 = (double*)malloc(40); // double[5] 처럼 사용하겠다는 의도.

	p1[0] = 10;
	p2[0] = 3.4;

	free(p1);
	free(p2);
		 
	return 0;
}