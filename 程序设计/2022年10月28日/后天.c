#include <stdio.h>

int main(void) {
	int a;
	int b;
	scanf("%d", &a);
	if (a >= 1 && a <= 7) {
		b = a + 2;
		if (b >= 8 && b <= 9) {
			b -= 7;
		}
		printf("%d", b);
	}
	return 0;
}
