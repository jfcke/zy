#include <stdio.h>

int main(void) {
	int a, b, c;
	scanf("%d %d", &a, &b);
	if (a > 0 && a <= 200, b > 1900 && b < 2022) {
		c = a + b - 1;
		printf("%d", c);
	}

	return 0;
}
