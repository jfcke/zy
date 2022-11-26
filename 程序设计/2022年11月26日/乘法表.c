#include <stdio.h>

int main(void) {
	int a, c;
	scanf("%d", &a);
	for (int i = 1; i <= a; i++) {
		for (int p = 1; p <= a; p++) {
			c = i * p;
			printf("%d*%d=%-4d", i, p, c);
		}
		printf("\n");
	}

	return 0;
}
#include <stdio.h>
/*
int main() {
	int N;
	scanf("%d", &N);
	int i, n, c;
	for (n = 1; n <= N; n++) {
		for (i = 1; i <= n; i++) {
			c = n * i;
			printf("%d*%d=%-4d", i, n, c);
		}
		printf("\n");
	}
	return 0;
}
*/