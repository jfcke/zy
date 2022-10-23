#include <stdio.h>

int main(void) {
	int n;
	int fact = 1;
	int i = 1;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		fact *= i;
	}
//	printf("%d", fact);
	printf("%d!=%d", n, fact);
	return 0;
}
