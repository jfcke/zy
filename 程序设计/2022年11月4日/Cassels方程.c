#include <stdio.h>

int main(void) {
	int a;
	int b, c;
	int i = 1;
	int x, y, z;
	scanf("%d", &a);

	while ( i <= a) {
		scanf("%d %d %d", &x, &y, &z);
		b = x * x + y * y + z * z;
		c = 3 * x * y * z;
		if (b == c) {
			printf("Yes");
		} else {
			printf("No");
		}
		i += 1;
	}


	return 0;
}
