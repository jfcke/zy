#include <stdio.h>

int main(void) {
	int a[10] = {4, 3, 5, 7, 1, 8, 2, 0, 9, 6};
	int i, j, t;
	for (j = 0; j < 9; j++) {
		for (i = 0; i < 9 - j; i++) {
			if (a[i] > a[i + 1]) {
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
			}
		}
	}
	for (i = 0; i < 10; i++) {
		printf("%d", a[i]);
	}
	return 0;
}
