#include <stdio.h>

int main(void) {
	int a;
	int b = 0;
	int c = 0;
	int A;
	int i;
	int sum;
	scanf("%d", &a);
	for (i = 0; i < a; i++) {
		scanf("%d ", &A);
		sum = A % 2;
		if (sum == 0) {
			b++;
		} else {
			c++;
		}
	}
	printf("%d %d", c, b);

	return 0;
}
