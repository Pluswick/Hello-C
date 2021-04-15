#include<stdio.h>

int main() {
	int i;
	int sum = 0;
	int mlt = 1;
	for (i = 1; i < 10; i = i + 2)
		printf("i=%d\n", i);

	for (i = 1; i <= 10; i++)
	{
		mlt = i * mlt;
		printf("multi=%d\n", mlt);
	}

	for (i = -1; i > -11; i--) {
		sum = sum + i;
		printf("sum=%d\n", sum);
	}

	
}