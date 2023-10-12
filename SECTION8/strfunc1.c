#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[] = "ABCD";
	char s2[] = "ABCD";

	// 아래 코드는 배열의 주소를 비교하는 코드입니다.
	// 항상 거짓입니다.
	if (s1 == s2) { 
		
	}

	// 2개 문자열이 같은지 조사하려면 아래 처럼 해야 합니다.
	if (strcmp(s1, s2) == 0) {
		printf("same string\n");
	}
										 
	return 0;
}