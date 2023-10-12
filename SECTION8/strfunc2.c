#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[] = "ABCD";
	char s2[5];

	int n1 = sizeof(s1); // 5. 배열이 차지하는 메모리 크기. 1byte * 5.
	int n2 = strlen(s1); // 4. 문자열의 길이. NULL 문자 제외

	s2 = s1;			// error. 배열은 대입할수 없습니다.
	strcpy(s2, s1);		// ok.    문자열 복사

	strcat(s2, s1);		// 기존 문자열에 새로운 문자열 붙이기	
						// s2는 "ABCDABCD" 가 됩니다.
	return 0;
}