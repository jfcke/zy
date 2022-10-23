#include <stdio.h>

int main(void) {
	int a, b1, b2, b3;

	scanf("%d", &a);
	b3 = a % 10;
	b2 = a / 10;
	b1 = a / 100;
	printf("%d", b1 + b2 + b3);

	return 0;
}
