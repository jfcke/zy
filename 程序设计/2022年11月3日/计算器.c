#include <stdio.h>

int main(void) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b && a > c && b > c) {
		printf("%d->%d->%d", c, b, a);
	}
	if (a > b && a > c && c > b) {
		printf("%d->%d->%d", b, c, a);
	}
	if (b > a && b > c && a > c) {
		printf("%d->%d->%d", c, a, b);
	}
	if (b > a && b > c && c > a) {
		printf("%d->%d->%d", a, c, b);
	}
	if (c > b && c > a && b > a) {
		printf("%d->%d->%d", a, b, c);
	}
	if (c > b && c > a && a > b) {
		printf("%d->%d->%d", b, a, c);
	}

	return 0;
}

