#include <stdio.h>
int main() {
	unsigned char d1, d2;
	unsigned char result;

	d1 = 1;
	d2 = 0;
	
	result = d1 && d2;
	printf("%d\n", result);

	return 0;

}