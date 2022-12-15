#include <stdio.h>

int main(void) {
	int i, a, b, j, n;
	int p[10][10];
	scanf("%d", &a);
	for (n = 1; n <= a; n++) {
		scanf("%d", &b);
		for (i = 0; i < b; i++) {
			for (j = 0; j < b; j++)
				scanf("%d", &p[i][j]);
		}
	}
	int fag = 1;
	for (i = 0; i < b; i++) {
		for (j = 0; j < b; j++) {
			if (i <= j) {
				continue;
			}
			if (p[i][j] != 0) {
				fag = 0;
			}
			if (fag == 1) {
				printf("YES\n");
			} else {
				printf("NO\n");
			}
		}
	}
	return 0;
}