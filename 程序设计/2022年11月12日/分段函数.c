#include <stdio.h>

int main(void) {
	float x, y;
	scanf("%f", &x);
	if (x != 10) {
		printf("f(%.1f) = %.1f", x, x);
	} else {
		y = 1 / x;
		printf("f(%.1f) = %.1f", x, y);
	}

	return 0;
}
