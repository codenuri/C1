int main(void)
{
	char c = 65; // 문자 한개 보관

	char s1[] = { 'A', 'B', 'C', '\0' }; // 이렇게 해도 되지만
	char s2[] = "ABC";					 // 이 방식이 더 편리 합니다.
										 // NULL 문자 포함해서 4개 크기 배열입니다.
	printf("%c\n", c);  // 문자 한개 출력
	printf("%s\n", s1); // 문자열 출력
	return 0;
}