#include <stdio.h>

int main(void) {
	int x;
	scanf("%d", &x);
	if (x >= 10) {
		x = 3 * x - 11;
		printf("%d", x);
	}
	if (x >= 1 && x < 10) {
		x = 2 * x - 1;
		printf("%d", x);
	}
	if (x < 1) {
		printf("%d", x);
	}
	return 0;
}
