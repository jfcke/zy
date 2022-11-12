#include <stdio.h>
#include <math.h>

int main(void) {
	float a, b, c;
	double R;
	float X1, X2, X;
	float Z;
	scanf("%f %f %f", &a, &b, &c);
	R = b * b - 4 * a * c;
	if (R > 0 && a != 0) {
		X1 = (sqrt(R) - b ) / (2 * a);
		X2 = (-sqrt(R) - b ) / ( 2 * a);
		if (X1 > X2) {
			printf("%.2f\n", X1);
			printf("%.2f", X2);
		} else {
			printf("%.2f\n", X2);
			printf("%.2f", X1);

		}
	}
	if (R == 0 && b != 0 && c != 0) {
		X1 = -b / (2 * a);
		printf("%.2f", X);
	}
	if (a == 0 && b != 0 && c != 0) {
		X1 = -c / b;
		printf("%.2f", X1);
	}
	if (a == 0 && b == 0 && c == 0) {
		printf("Zero Equation");
	}
	if (a == 0 && b == 0 && c != 0) {
		printf("Not An Equation");
	}

	return 0;
}
