#include <stdio.h>

int main(void) {
	int N, M;
	int a, b, c, d, e, sum;
	scanf("%d %d", &M, &N);
	if (M <= N && M >= 100 && M <= 999 && N >= 100 && N <= 999) {
		for (M; M <= N; M++) {
			a = M % 10;
			b = M / 10;
			c = b % 10;
			d = b / 10;
			e = d % 10;
			sum = a * a * a + c * c * c + e * e * e;
			if (sum == M) {
				printf("%d\n", M);
			}
		}
	} else {
		printf("Invalid Value.");

	}

	return 0;
}
