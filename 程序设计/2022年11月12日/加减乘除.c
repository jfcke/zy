#include <stdio.h>

int main(void) {
	int a, b, c;
	int sum;
	float x;
	scanf("%d %d", &a, &b);
	{
		sum = a + b;
		printf("%d + %d = %d\n", a, b, sum);
	}
	{

		sum = a - b;
		printf("%d - %d = %d\n", a, b, sum);
	}
	{

		sum = a * b;
		printf("%d * %d = %d\n", a, b, sum);
	}
	sum = a % b;
	if (sum == 0) {
		c = a / b;
		printf("%d / %d = %d\n", a, b, c);
	} else{
		x = a / b;
		printf("%d / %d = %.2f\n", a, b, x );
	}

	return 0;
}
