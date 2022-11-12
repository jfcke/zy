#include <stdio.h>

int main(void) {
	int a, b, sum;
	char c;
	scanf("%d %c %d", &a, &c, &b);
	switch (c) {
		case'+':
			sum = a + b;
			printf("%d", sum);
			break;
		case'-':
			sum = a - b;
			printf("%d", sum);
			break;
		case'*':
			sum = a * b;
			printf("%d", sum);
			break;
		case'/':
			sum = a / b;
			printf("%d", sum);
			break;
		case'%':
			sum = a % b;
			printf("%d", sum);
			break;
		default:
			printf("ERROR");
	}

	return 0;
}
