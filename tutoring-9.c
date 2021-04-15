#include<stdio.h>
int main() {
	int n1, n2;
	char op;
	int result;
	scanf("%d %d", &n1, &n2);
	
	scanf("%d", &op);

	if (op == '+')
		result = n1 + n2;
	else if (op == '-')
		result = n1 - n2;
	else if (op == '*')
		result = n1 * n2;
	else if (op == '/')
		result = n1 / n2;

	printf("%d", result);


}