#include <stdio.h>

int main(void) {
	int a, b, s;
	scanf("%d/%d", &a, &b);
	if (a > b) {
		s = b;
		for (int i = b; i > 1; i--) {
			if (a % i == 0 && b % i == 0) {
				a = a / i;
				b = b / i;
			}
		}
		printf("%d/%d", a, b);
	} else {
		s = b;
		for (int i = a; i > 1; i--) {
			if (a % i == 0 && b % i == 0) {
				a = a / i;
				b = b / i;
			}
		}
		printf("%d/%d", a, b);
	}

	return 0;
}
