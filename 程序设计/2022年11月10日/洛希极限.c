#include <stdio.h>

int main(void) {
	float r, k;
	int s;
	float x, y;
	scanf("%f %d %f", &r, &s, &k);
	if (s == 0) {
		x = r * 2.455;
		y = x / k;
		printf("%.2f", x);
		if (y > 1) {
			printf(" T_T");
		} else {
			printf(" ^_^");
		}
	}
	if (s == 1) {
		x = r * 1.265;
		y = x / k;
		printf("%.2f", x);
		if (y > 1) {
			printf(" T_T");
		} else {
			printf(" ^_^");
		}
	}

	return 0;
}
