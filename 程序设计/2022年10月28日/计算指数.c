#include <stdio.h>
#include <math.h>

int main(void) {
	int a;
	int b;
	scanf("%d", &a);
	if (a >= 0 && a <= 10) {
		b = pow(2, a);
		printf("2^%d=%d", a, b);
	}

	return 0;
}
