#include <stdio.h>

int main(void) {
	int v, l;
	int a, b;
	float c;
	scanf("%d %d", &v, &l);
	a = v * 1.1;
	b = v * 1.5;
	if (l > a) {
		printf("OK");
	}
	if (l <= a && l < b) {
		c = (v - l) / l * 100;
		printf("Exceed %.0f. Ticket 200", c);
	}
	if (v >= b) {
		c = (v - l) / l * 100;
		printf("Exceed %d. License Revoked", c);
	}

	return 0;
}
