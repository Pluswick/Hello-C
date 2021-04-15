#include<stdio.h>
int main() {
    int a = 1;
	int b = 2;
	
	if (a > b)
		printf("%d\n", a);
	else
		printf("%d\n", b);

	(a > b) ? printf("a=%d", a) : printf("b=%d", b);

	return 0;
}