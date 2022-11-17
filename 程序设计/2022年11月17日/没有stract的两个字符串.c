#include <stdio.h>

int main(void) {
	char c[5];
	char d[5];
	for (int i = 0; i < 5; i++) {
		scanf("%c", &c[i]);
	}
	for (int i = 0; i < 5; i++) {
		scanf("%c", &d[i]);
	}
	for (int i = 0; i < 5; i++) {
		printf("%c", c[i]);
	}
	for (int i = 0; i < 5; i++) {
		printf("%c", d[i]);
	}

	return 0;
}
