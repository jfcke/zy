#include <stdio.h>
#include <math.h>

int main(void) {
	float x1, y1, x2, y2, x3, y3;
	float L, S, A, B, C;
	scanf("%f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3);
	S = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
	S = pow(S, 0.5);
	B = (x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3);
	B = pow(B, 0.5);
	C = (x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1);
	C = pow(C, 0.5);

	if (S + B > C && S + C > B && B + C > S) {
		L = S + B + C;
		A = L / 2 * ((L / 2) - S) * ((L / 2) - B) * ((L / 2) - C);
		A = pow(A, 0.5);
		printf("L = %.2f, A = %.2f", L, A);

	} else {
		printf("Impossible");
	}

	return 0;
}
