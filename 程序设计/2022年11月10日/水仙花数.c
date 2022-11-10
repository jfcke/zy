#include <stdio.h>

int main(void) {
	int N;
	int a, b, c;
	int sum;
	scanf("%d", &N);
	c = N;
	if (N >= 100 && N <= 999) {
		a = N % 10;
		N /= 10;
		b = N % 10;
		N /= 10;
		sum = a * a * a + b * b * b + N * N * N;
		if (sum == c) {
			printf("Yes");
		} else {
			printf("No");
		}
	} else {
		printf("Invalid Value.");
	}

	return 0;
}
