#include <stdio.h>

int main(void) {
	int T1, T2;
	int h, h1, h2;
	int m, m1, m2;
	scanf("%d %d", &T1, &T2);
	h1 = T1 / 100;
	h2 = T2 / 100;
	h = h2 - h1;
	m1 = T1 % 100;
	m2 = T2 % 100;
	m = m2 - m1;
	if (m < 0) {
		h = h - 1;
		m = 60 + m;
	}
	printf("%02d:%02d", h, m);

	return 0;
}
