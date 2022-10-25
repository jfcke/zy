#include <stdio.h>

int main(void) {
	int n;
	int x = 0;
	int m;
	int y = 0;
	scanf("%d", &n);


	while (n > 0) {
		m = n % 10;
		n /= 10;
		if (m % 2 != 0) {
			x += 1;
		} else {
			y += 1;
		}
	}
	printf("%d %d", x, y);

	return 0;
}
