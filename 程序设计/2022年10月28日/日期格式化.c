#include <stdio.h>


int main(void) {
	int a, b, c;
	scanf("%d-%d-%d", &a, &b, &c);
	printf("%d-%02d-%d", c, a, b);
	return 0;
}
