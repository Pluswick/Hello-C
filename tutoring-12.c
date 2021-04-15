#include<stdio.h>

int main() {
	int i;
	int j;
	for (i = 0; i < 10; i++)
	{
		if (i == 5)
			break;
		for (j = 0; j < 10; j++)
		{
			if (j == 5)
				continue;
			printf("(i,j)=(%d,%d)\n", i, j);

		}
	}
	return 0;
}