#include <stdio.h>

int add(int a, int b);  // �Լ��� ����(declaration)


int main(void)
{
    int n = add(1);   // �Լ� ȣ��(function call)
    
    printf("%d\n", n);
    
    return 0;
}

int add(int a, int b) // �Լ� ���� (definition)
{
    return a + b;
}




