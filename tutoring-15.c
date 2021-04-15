#include<stdio.h>
double Slash(double a, double b)
{
	double result;
	result = a / b;
	return result;
}
int main() {
	double n, m;
	n = 3.141592;
	m = 2.4717;

	double result = Slash(n, m);

	printf("result=%g", result);

	return 0;
}