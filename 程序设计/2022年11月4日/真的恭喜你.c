#include <stdio.h>

int main(void) {
	int x;
	scanf("%d", &x);
	if (x >= 90 && x <= 100) {
		printf("gong xi ni kao le %d fen!", x);
	} else {
		printf("kao le %d fen bie xie qi!", x);
	}

	return 0;
}
