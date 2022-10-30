#include <stdio.h>

int main(void) {
	const int g = 10;
	const int t = 3;
	float h;
	h = (0.5 ) * (g * t * t);
	printf("height=%.2f", h);
	return 0;
}
