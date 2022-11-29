#include <stdio.h>

int main(void) {
	int a;
	int sum = 1;
	scanf("%d", &a);
	for (int i = 0; i < a - 1; i++) {
		sum = (sum + 1) * 2;
	}
	printf("%d", sum);

	return 0;
}
