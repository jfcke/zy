#include <stdio.h>

int main(void) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a == b && c != a && c != b) {
		printf("C");
	}
	if (a == c && b != a && b != c) {
		printf("B");
	}
	if (b == c && a != b && a != c) {
		printf("A");
	}

	return 0;
}
