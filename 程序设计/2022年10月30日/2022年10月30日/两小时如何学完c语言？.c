#include <stdio.h>

int main(void) {
	int a, b, c, d;
	scanf("%d %d %d", &a, &b, &c);
	if (a > 0 && a <= 400000, b > 0 && b <= 3000, c > 0 && c <= 120) {
		d = a - b * c;
		printf("%d", d);
	}

	return 0;
}
