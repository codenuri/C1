// 1. �������� 
//    static �޸� ���
int g = 0;

void foo(void)
{
	// 2. ��������
	//    stack �޸� ���
	int n = 0;

	// 3. �����޸� �Ҵ�
	//    heap �޸� ���
	// ��, p ��ü�� �� ���������̹Ƿ�
	// stack �޸� ���
	int* p = (int*)malloc(20);

	free(p);
}
int main(void)
{
	foo();

	// "hello" �� ��� �޸𸮿� ����
	printf("hello");

	return 0;
}