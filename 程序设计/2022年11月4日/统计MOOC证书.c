#include <stdio.h>

int main(void) {
	int n;
	int a;
	int i = 1;
	int b = 0;
	int c = 0;
	int e = 0;
	scanf("%d", &n);
	for (i; i <= n; i++) {
		scanf("%d", &a);
		if (a >= 85) {
			b += 1;
		}
		if (a >= 60 && a < 85) {
			c += 1;
		}
		if (a < 60 && a >= 0) {
			e += 1;

		}

	}
	printf("%d %d %d", b, c, e);
	return 0;
}
