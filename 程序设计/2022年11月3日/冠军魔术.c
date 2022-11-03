#include <stdio.h>
#include <math.h>

int main(void) {
	int a, b, c, i;

	scanf("%d %d", &a, &b);
	b /= 2;
	c = a * pow(2, b);
	i = b % 2;
	if (c <= (pow(2, 31) - 1)) {

		if (i == 1) {
			printf("1 %d", c);
		} else {
			printf("0 %d", c);
		}
	}
	return 0;
}
