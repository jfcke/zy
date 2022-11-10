#include <stdio.h>

int main(void) {
	/*	int n;
		int i = 0;
		scanf("%d", &n);
		while (n != 0) {
			n /= 10;
			i++;
		}
		printf("%d", i);*/
	/*	int n;
		int i = 0;
		scanf("%d", &n);
		do {
			n /= 10;
			i++;

		} while (n != 0);
		printf("%d", i);*/
	int n;
	int i;
	scanf("%d", &n);
	for (i = 0; n != 0; i++) {
		n /= 10;
	}
	printf("%d", i);
	return 0;
}
