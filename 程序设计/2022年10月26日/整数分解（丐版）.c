#include <stdio.h>

int main(void) {
	int a;
	int t = 0;
	int d;
	scanf("%d", &a);

	do {
		d = a % 10;
		t = t * 10 + d;
		a /= 10;
	} while (a > 0);
	a = t;
	do {
		d = a % 10;
		printf("%d", d);
		if (a > 9) {
			printf(" ");
		}
		a /= 10;
	} while (a > 0);
	printf("\n");
	return 0;
}
