#include <stdio.h>

int main(void) {
	int a, b, c;
	scanf("%d %d", &a, &b);
	if (a >= 1 && a <= 100) {
		if (b > 0 && b < a) {
			c = 5000 - 100 * (100 - a) * 1 / 2 - 100 * b * 1 / 2;
			printf("%d", c);
		}
	}

	return 0;
}

