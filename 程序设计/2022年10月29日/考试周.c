#include <stdio.h>

int main(void) {
	float a, b;
	float c;
	scanf("%f %f", &a, &b);
	if (a >= 1 && a <= 30) {
		if (b >= 1 && b <= 10) {
			c = a / b;
			printf("%.0f/%.1f=%.0f", a, c, b);
		}
	}

	return 0;
}
