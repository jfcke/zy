#include <stdio.h>

int main(void) {
	int a, b, c, d;
	int x, y, z;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if (a >= 0 && a <= 1000 && b >= 0 && b <= 1000 && c >= 0 && c <= 1000 && d >= 0 && d <= 1000) {
		x = c - a;
		y = d - b;
		if (x >= 0 && y >= 0) {
			z = x + y;
			printf("%d", z);
		}
		if (x < 0 && y < 0) {
			x = a - c;
			y = b - d;
			z = x + y;
			printf("%d", z);
		}
		if (x < 0 && y > 0) {
			x = a - c;
			y = d - b;
			z = x + y;
			printf("%d", z);
		}
		if (x > 0 && y < 0) {
			x = c - a;
			y = b - d;
			z = x + y;
			printf("%d", z);
		}
	}
	return 0;
}
