#include <stdio.h>

int main(void) {
	float x, y;
	scanf("%f", &x);
	if (x != 0) {
		y = 1 / x;
		printf("f(%.1f) = %.1f", x, y);
	} else {
		printf("f(0.0) = 0.0");
	}

	return 0;
}
