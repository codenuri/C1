#include <stdio.h>

int main(void)
{
	char s[4] = { 65, 66, 67, 0 };

	printf("%p\n", s); // &s[0]
	printf("%s\n", s); // "ABC"

	return 0;
}