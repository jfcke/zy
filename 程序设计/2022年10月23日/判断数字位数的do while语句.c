#include <stdio.h>

int main(void) {
	int x, n;
	n = 0;

	scanf("%d", &x);
	do {
		n++;
		x /= 10;
	} while (x > 0);

	printf("%d", n);

	return 0;
}
