#include <stdio.h>
#include <stdlib.h>

int main()
{
	int cnt = 0;
	printf("�л����� �Է��� �ּ��� > ");
	scanf("%d", &cnt);

	int score1[cnt]; // �Ϻ� C �����Ϸ������� ����.
	int* score2 = (int*)malloc(sizeof(int) * cnt); // ��� C �����Ϸ����� ����

	// score2�� ������ ������ �迭ó�� ��밡��
	score2[0] = 10;
	score2[1] = 10;

	free(score2); // ���̻� �޸𸮰� �ʿ���ٸ� �ݵ�� �����ؾ� �մϴ�.			 
	return 0;
}			 