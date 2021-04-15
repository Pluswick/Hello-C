#include<stdio.h>

int counter = 0;

int Add1(void)
{
	counter++;

	return counter;
}
int Add2(void)
{
	counter += 2;

	return counter;
}
int main(void)
{
	printf("Add1=%d\n", Add1());
	printf("Add2=%d\n", Add2());
}