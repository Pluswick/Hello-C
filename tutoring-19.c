#include<stdio.h>

int func_mul(int n)
{
	
	int mul=1;
	for (int i = 1; i <= n; i++)
	{
		mul *= i;
	}
	return mul;
}
int r_func_mul(int n)
{
	if (n == 1)
		return 1;
	return n * r_func_mul(n - 1);
}
int main(void)
{
	int n;
	scanf_s("%d", &n);
	printf("%d\n", func_mul(n));
	printf("recursive=%d\n", r_func_mul(n));
}