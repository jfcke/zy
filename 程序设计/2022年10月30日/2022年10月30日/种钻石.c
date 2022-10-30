#include <stdio.h>

int main(void) {
	int a, b, c;
	scanf("%d %d", &a, &b);
	if (a > 0 && a <= 10000000, b >= 1 && b <= 200) {
		c = a / b;
		printf("%d", c);
	}

	return 0;
}
