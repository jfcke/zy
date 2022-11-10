#include <stdio.h>

int main(void) {
	int a, b, c, d;
	int i = 0;
	scanf("%d", &a);
	b = a;
	while (a > 0) {
		a /= 10;
		i++;

	}
	if (i == 3) {
		d = b % 100;
		c = b / 100;
		printf("200%d-%02d", c, d);
	}
	if (i == 4) {

		d = b % 100;
		c = b / 100;
		if (c < 22) {
			printf("20%d-%02d", c, d);
		} else {
			printf("19%d-%02d", c, d);
		}
	}
	if (i == 6) {
		d = b % 100;
		c = b / 100;
		printf("%d-%02d", c, d);
	}
	return 0;
}
