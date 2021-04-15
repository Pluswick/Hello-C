#include<stdio.h>
int main() {
	
	int a, b;

	printf("put a value of 'a' and 'b'\n");
	scanf_s("%d, %d\n", &a, &b);
	if (a > b)
		printf("a=%d", a);
	else
		printf("b=%d", b);

	return 0;

}