#include <stdio.h>

int main(void) {
	int people, num;
	int i, answer, score;
	int a[101], b[101];
	int c[101][101];
	int m, k, l, n;
	int v = 0;
	scanf("%d\n", &people, &num);
	for (i = 0; i < num; i++) {
		scanf("%d\n", score);
		a[i] = score;
	}
	for (i = 0; i < num; i++) {
		scanf("%d\n", answer);
		b[i] = answer;
	}
	for (n = 0; n < people; n++) {
		for (i = 0; i < num; i++) {
			scanf("%d\n", &m);
			c[n][i] = m;
		}
	}
	for (k = 0; k < people; k++) {
		for (l = 0; l < num; l++) {
			if (c[k][l] == b[l]) {
				v += a[l];
			}
			printf("%d\n", v);
		}
	}

	return 0;
}
