#include <stdio.h>

int main(void) {
	int a, b, c, d;
	int Sum;
	float Average;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	Sum = a + b + c + d;
	Average = (a + b + c + d) * 0.25;
	printf("Sum = %d; Average = %.1f", Sum, Average);

	return 0;
}
