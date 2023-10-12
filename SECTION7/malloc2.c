#include <stdio.h>
#include <stdlib.h>

int main()
{
	int cnt = 0;
	printf("학생수를 입력해 주세요 > ");
	scanf("%d", &cnt);

	int score1[cnt]; // 일부 C 컴파일러에서는 에러.
	int* score2 = (int*)malloc(sizeof(int) * cnt); // 모든 C 컴파일러에서 동작

	// score2는 포인터 이지만 배열처럼 사용가능
	score2[0] = 10;
	score2[1] = 10;

	free(score2); // 더이상 메모리가 필요없다면 반드시 제거해야 합니다.			 
	return 0;
}			 