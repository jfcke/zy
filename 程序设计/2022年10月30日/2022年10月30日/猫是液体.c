#include <stdio.h>

int main(void) {
	int a, b, c, d;
	scanf("%d %d %d", &a, &b, &c);
	if (a > 0 && a <= 100) {
		if (b > 0 && b <= 100) {
			if (c > 0 && c <= 100) {
				d = a * b * c;
				printf("%d", d);
			}
		}

	}

	return 0;
}
