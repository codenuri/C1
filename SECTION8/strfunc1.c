#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[] = "ABCD";
	char s2[] = "ABCD";

	// �Ʒ� �ڵ�� �迭�� �ּҸ� ���ϴ� �ڵ��Դϴ�.
	// �׻� �����Դϴ�.
	if (s1 == s2) { 
		
	}

	// 2�� ���ڿ��� ������ �����Ϸ��� �Ʒ� ó�� �ؾ� �մϴ�.
	if (strcmp(s1, s2) == 0) {
		printf("same string\n");
	}
										 
	return 0;
}