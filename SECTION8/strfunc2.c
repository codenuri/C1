#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[] = "ABCD";
	char s2[5];

	int n1 = sizeof(s1); // 5. �迭�� �����ϴ� �޸� ũ��. 1byte * 5.
	int n2 = strlen(s1); // 4. ���ڿ��� ����. NULL ���� ����

	s2 = s1;			// error. �迭�� �����Ҽ� �����ϴ�.
	strcpy(s2, s1);		// ok.    ���ڿ� ����

	strcat(s2, s1);		// ���� ���ڿ��� ���ο� ���ڿ� ���̱�	
						// s2�� "ABCDABCD" �� �˴ϴ�.
	return 0;
}