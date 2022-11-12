#include <stdio.h>

int main(void) {
	int y;
	int t;
	float m;
	scanf("%d %d", &y, &t);
	if (y < 5) {
		if (t <= 40) {
			m = 30 * t;
			printf("%.2f", m);
		} else {
			t = t - 40;
			m = 1200 + 1.5 * 30 * t;
			printf("%.2f", m);
		}
	} else {
		if (t <= 40) {
			m = 50 * t;
			printf("%.2f", m);
		} else {
			t = t - 40;
			m = 2000 + 1.5 * 50 * t;
			printf("%.2f", m);
		}
	}

	return 0;
}
