#include <stdio.h>
#include <stdlib.h>

int main()
{
	// �����ϰ� 40 ����Ʈ�� �Ҵ�������
	int*    p1 = (int*)malloc(40);    // int[10] ó�� ����ϰڴٴ� �ǵ�
	double* p2 = (double*)malloc(40); // double[5] ó�� ����ϰڴٴ� �ǵ�.

	p1[0] = 10;
	p2[0] = 3.4;

	free(p1);
	free(p2);
		 
	return 0;
}