#include <stdio.h>

int main(void) {
	int fahr;
	int a;
	scanf("%d", &fahr);
	a = 5 * (fahr - 32) / 9;
	printf("celsius = %d", a);
	return 0;
}
