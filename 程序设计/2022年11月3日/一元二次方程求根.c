#include <stdio.h>
#include <math.h>

int main(void) {
	int a, b, c, d;
	float e, f, g;
	scanf("%d %d %d", &a, &b, &c);
	d = b * b - 4 * a * c;
	if (d > 0) {
		e = (pow(d, 1 / 2) - b ) / (2 * a);
		f = (-pow(d, 1 / 2) - b ) / ( 2 * a);
		printf("%f %f", e, f);
	} else if (d == 0) {
		g = -1 * b  / 2 * a;
		printf("%f", g);
	} else if (d < 0) {
		printf("该一元二次方程没有根");
	}
	return 0;
}
