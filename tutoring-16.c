#include<stdio.h>
int Add(int a, int b) {
	int add;
	add = a + b;
	return add;
}
int Substract(int a, int b)
{
	int sub;
	sub = a - b;
	return sub;
}
int Multiply(int a, int b)
{
	int mul;
	mul = a * b;
	return mul;
}
int main() {
	char a;
	int n, m;
	scanf("%d %c %d", &n, &a, &m);
	if (a == '+') {
		int result;
		result = Add(n, m);
		printf("result=%d", result);
	}
	else if (a == '-') {
		int result;
		result = Substract(n, m);
		printf("result=%d", result);
	}
	else if (a == '*') {
		int result;
		result = Multiply(n, m);
		printf("result=%d", result);
	}
}