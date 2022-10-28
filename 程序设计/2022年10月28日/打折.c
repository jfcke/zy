#include <stdio.h>

int main(void) {
	int a;
	float b;
	float c;
	float d;
	scanf("%d %f", &a, &b);
	if (a >= 0 && a <= 10000) {
		if (b >= 1 && b <= 9) {
			d = b / 10;
			c = a * d;
			printf("%.2f", c);
		}
	}

	return 0;
}
