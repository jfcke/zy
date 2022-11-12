#include <stdio.h>

int main(void) {
	int v;
	scanf("%d", &v);
	if (v > 60) {
		printf("Speed: %d - Speeding", v);
	}
	if (v >= 0 && v <= 60) {
		printf("Speed: %d - OK", v);
	}

	return 0;
}
