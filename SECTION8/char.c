#include <stdio.h>

int main(void)
{
	int  n = 'a';
	char c = 'a';

	printf("%d, %c\n", n, n); // 97, 'a'
	printf("%d, %c\n", c, c); // 97, 'a'

	printf("%d\n", sizeof(n)); // 4
	printf("%d\n", sizeof(c)); // 1

	return 0;
}