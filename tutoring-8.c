#include<stdio.h>
int main() {
	char c;
	
	printf("a, b, c�� �ϳ��� ���� �Է��Ͻʽÿ�.\n");
	
	scanf_s("%c", &c);
	if (c == 'a')
		printf("A\n");
	else if (c == 'b')
		printf("B\n");
	else
		printf("C\n");

	return 0;
}