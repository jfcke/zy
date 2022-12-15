#include <stdio.h>

int main(void) {
	int i, a, b, j;
	int p[10][10];
	scanf("%d", &a);
	for (i = 0; i < a; i++) {
		scanf("%d", &b);
		for (i = 0; i < b; i++) {
			for (j = 0; j < b; j++)
				scanf("%d", &p[i][j]);
		}
	}
	int fag = 1;
	for (i = 0; i < b; i++) {
		for (j = 0; j < b; j++) {
			if (i < j) {
				continue;
			}
			if (p[i][j] != 0) {
				fag = 0;
			}
			if (fag == 1) {
				printf("YES");
			} else {
				printf("NO");
			}
		}
	}
	return 0;
}