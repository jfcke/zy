#include <stdio.h>

int main(void) {
	int x, y;
	scanf("%d", &x);
	if (x < 0) {
		y = -1;
		printf("sign(%d) = %d", x, y);
	}
	if (x == 0) {
		y = 0;
		printf("sign(%d) = %d", x, y);
	}
	if (x > 0) {
		y = 1;
		printf("sign(%d) = %d", x, y);
	}

	return 0;
}
