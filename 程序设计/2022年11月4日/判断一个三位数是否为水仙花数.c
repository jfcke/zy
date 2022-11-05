#include <stdio.h>

int main(void) {
	int x, a, b, t;
	int i = 1;
	int sum = 0;
	scanf("%d", &x);
	if (x >= 100 && x <= 999) {
		for (i = 1; i <= 3; i++) {
			b = x;
			a = x % 10;
			x /= 10;
			sum = sum +  (a * a * a);
		}
		if (sum == b) {
			printf("Yes");
		} else {
			printf("No");
		}

	} else {
		printf("Invalid Value.");
	}

	return 0;
}
