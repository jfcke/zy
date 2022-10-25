#include <stdio.h>

int main(void) {
	int n;
	int x = 1;
	scanf("%d", &n);
	printf("%d", x);
	while (x <= n) {
		x += 2;
		if (x <= n) {
			printf(" %d", x);
		}


	}

	return 0;
}
