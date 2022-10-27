#include <stdio.h>

int main(void) {
	int a, b, t;
	t = a;
	b = a;
	b = t;
	scanf("%d %d", &a, &b);
	printf("a=%d b=%d", b, a);

	return 0;
}
