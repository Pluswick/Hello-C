#include<stdio.h>
int main() {
	int a, b, c;
	int max;

	printf("Please put values of 'a', 'b' and 'c'\n");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a > b)
		max = a;
	else
		max = b;
	if (max > c)
		max = max;
	else
		max = c;
	printf("max is %d", max);
	return 0;
}