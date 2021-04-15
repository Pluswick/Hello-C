#include<stdio.h>
int main() {
	char c;
	
	printf("a, b, c중 하나의 값을 입력하십시오.\n");
	
	scanf_s("%c", &c);
	if (c == 'a')
		printf("A\n");
	else if (c == 'b')
		printf("B\n");
	else
		printf("C\n");

	return 0;
}