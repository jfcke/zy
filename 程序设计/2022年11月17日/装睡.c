#include <stdio.h>

int main(void) {
	int N;
	int i;
	scanf("%d", &N);
	char c[10][10];
	int b[10][10];
	for (i = 0; i < N; i++) {
		scanf("%s %d %d", &c[i], &b[i][1], &b[i][2]);
	}
	for (i = 0; i < N; i++) {
		if (b[i][1] < 15 || b[i][2] > 20 || b[i][2] < 50 || b[i][2] > 70)
			printf("%s\n", c[i]);
	}

	return 0;
}
