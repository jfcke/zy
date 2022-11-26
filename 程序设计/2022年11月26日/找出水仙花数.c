#include <stdio.h>
#include <math.h>

int main() {
	int a, b, i;
	int A, B, C;
	scanf("%d %d", &a, &b);
	if (a <= b && b <= 999 && a >= 100) {
		for (i = a; i <= b; i++) {
			A = i / 100;
			B = i / 10 % 10;
			C = i % 10;
			if (i == pow(A, 3) + pow(B, 3) + pow(C, 3)) {
				printf("%d\n", i);
			} else {
				printf("Invalid Value.");
			}
		}
	}
	return 0;
}