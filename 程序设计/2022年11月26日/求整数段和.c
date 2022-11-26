#include <stdio.h>

int main(void) {
	int a, b;
	int i = 0;
	int j = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	for (i = a; i <= b; i++) {
		printf("%5d", i);
		sum = sum + i;
		j++;
		if (j >= 5) {
			printf("\n");
			j = 0;
		}
	}
	if (j != 0)
		printf("\n");
	printf("Sum = %d\n", sum);

	return 0;
}
