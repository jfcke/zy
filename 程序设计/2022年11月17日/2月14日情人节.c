#include <stdio.h>

int main(void) {
	char c[100][100];
	int i;
	for (i = 0; i < sizeof(c[i][1] / sizeof(c[0][1])); i++) {
		scanf("%s\n", &c[i][1]);
		if (c[i][1] == '.') {
			break;
		}
		if (i < 2) {
			printf("Momo... No one is for you ...");
		}
		if (i >= 2 && i < 14) {
			printf("%s is the only one for you...", &c[1][1]);
		}
		if (i >= 14) {
			printf("%s and %s are inviting you to dinner...", &c[1][1], &c[13][1]);
		}
	}

	return 0;
}
