#include <stdio.h>

int main(void) {
	int a, b, f, g;
	int c, d, e, h, i, m;
	scanf("%d %d\n", &a, &b);
	scanf("%d %d %d", &c, &d, &e);
	m = c + d + e;
	if (a > 0 && a <= 1000 && b > 0 && b <= 1000) {

		if (m == 2) {
			f = a + 1;
			g = b + 2;
			h = c + d + e;
			i = 3 - h;
			if (f > g) {
				printf("The winner is a: %d + %d", a, i);
			} else {
				printf("The winner is b: %d + %d", b, h);
			}
		}
		if (m == 3) {
			f = a;
			g = b + 3;
			h = c + d + e;
			i = 3 - h;
			if (f > g) {
				printf("The winner is a: %d + %d", a, i);
			} else {
				printf("The winner is b: %d + %d", b, h);
			}
		}
		if (m == 1) {
			f = a + 2;
			g = b + 1;
			h = c + d + e;
			i = 3 - h;
			if (f > g) {
				printf("The winner is a: %d + %d", a, i);
			} else {
				printf("The winner is b: %d + %d", b, h);
			}
		}
		if (m == 0) {
			f = a + 3;
			g = b;
			h = c + d + e;
			i = 3 - h;
			if (f > g) {
				printf("The winner is a: %d + %d", a, i);
			} else {
				printf("The winner is b: %d + %d", b, h);
			}
		}
	}
	return 0;
}
