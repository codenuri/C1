#include <stdio.h>

int main(void)
{
	int cnt = 0;
	printf("학생수를 입력하세요 >> ");
	scanf("%d", &cnt);

	// 학생수 만큼의 메모리 할당
	int score[cnt]; // 일부 C 컴파일러에서는 Error

	return 0;
}