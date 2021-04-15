#include<stdio.h>

int Add(int a, int b) {
	int result;
	result = a + b;

	return result;

}
void Print(void) {
	printf("hello\n");
}
int main() {
	int n, m;
	n = 10;
	m = 15;
	int result = 0;

	result = Add(n, m);
	printf("result = %d\n", result);
	
	Print();
	
	
	return 0;



}