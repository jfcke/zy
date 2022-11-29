#include <stdio.h>

int main(void) {
	int a[10];
	int b, i, j;
	int sum = 0;
	scanf("%d", &b);
	for (i = 0; i < b; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < b - 1; i++) {
		for (j = i + 1; j < b; j++) {
			sum = sum + a[i] * 10 + a[j];
			sum = sum + a[i] + a[j] * 10;

		}
	}
	printf("%d", sum);

	return 0;
}
