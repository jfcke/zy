#include <stdio.h>

int main(void) {
	float x;
	float y;
	scanf("%f", &x);
	if (x <= 15 && x >= 0) {
		y = 4 * x / 3;
		printf("%.2f", y);
	} else if (x > 15) {
		y = 2.5 * x - 17.5;
		printf("%.2f", y);
	}
	return 0;
}
