#include<stdio.h>
int counter_tick1(void)
{
	int counter = 0;
	counter++;

	return counter;
}
int counter_tick2(void)
{
	static int counter2 = 0;
	counter2++;

	return counter2;
}
int main(void)
{

	printf("1st count_tick1 = %d\n", counter_tick1());
	printf("2nd count_tick1 = %d\n", counter_tick1());
	printf("1st count_tick2 = %d\n", counter_tick2());
	printf("2nd count_tick2 = %d\n", counter_tick2());

	return 0;
}