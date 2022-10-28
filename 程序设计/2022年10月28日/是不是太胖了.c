#include <stdio.h>

int main(void) {
	int a;
	float b;
	scanf("%d", &a);
	if (a <= 300 && a > 100) {
		b = (a - 100) * 0.9 * 2;
		printf("%.1f", b);
	}
	return 0;
}
