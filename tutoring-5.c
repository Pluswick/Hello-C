#include<stdio.h>
int main() {
	int a = 1;
	int b = 2;
	int c = 10;
	int d = 14;

	if ((a > b) && (c > d))
		printf("a=%d, c=%d\n", a, c);
	else
		printf("b=%d, d=%d\n", b, d);

	if ((a <= b) && (c <= d))
		printf("b=%d, d=%d\nSAME\n", b, d);
	return 0;
}