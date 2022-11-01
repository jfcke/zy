#include <stdio.h>

int main(void) {
	int y, m, d, a;
	int sum = 0;
	scanf("%d %d %d", &y, &m, &d);
	a = y % 400;
	if (a == 0) {
		if (m == 2 || m == 4 || m == 5) {
			sum = (m - 1) * 30 + d + 1;
			printf("%d", sum);
		}
		if (m == 6 || m == 7) {
			sum = (m - 1) * 30 + d + 2;
			printf("%d", sum);
		}
		if (m == 8 ) {
			sum = (m - 1) * 30 + d + 3;
			printf("%d", sum);
		}
		if (m == 9 || m == 10) {
			sum = (m - 1) * 30 + d + 4;
			printf("%d", sum);
		}
		if (m == 11 || m == 12) {
			sum = (m - 1) * 30 + d + 5;
			printf("%d", sum);
		}
		if (m == 1 || m == 3) {
			sum = (m - 1) * 30 + d;
			printf("%d", sum);
		}

	} else {
		if (m == 1 || m == 4 || m == 5) {
			sum = (m - 1) * 30 + d;
			printf("%d", sum);
		}
		if (m == 6 || m == 7 || m == 2) {
			sum = (m - 1) * 30 + d + 1;
			printf("%d", sum);
		}
		if (m == 8 ) {
			sum = (m - 1) * 30 + d + 2;
			printf("%d", sum);
		}
		if (m == 9 || m == 10) {
			sum = (m - 1) * 30 + d + 3;
			printf("%d", sum);
		}
		if (m == 11 || m == 12) {
			sum = (m - 1) * 30 + d + 4;
			printf("%d", sum);
		}
		if ( m == 3) {
			sum = (m - 1) * 30 + d - 1;
			printf("%d", sum);
		}

	}



	return 0;
}
