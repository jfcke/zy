#include <stdio.h>

int main(void) {
	double eps, temp = 1, result = 1, i = 1;
	scanf("%lf", &eps);
	for (i; temp > eps; i++) {
		temp *= i / (2 * i + 1);
		result += temp;
	}
	printf("%.6lf", result * 2);

	return 0;
}
