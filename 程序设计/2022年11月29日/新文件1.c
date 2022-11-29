#include <stdio.h>

int main(void) {
	int a[10];
	int b, i;
	int v = 0;
	int n = 0;
	scanf("%d", &b);
	for ( i = 0; i < b; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < b; i++) {
		if (a[i] % 2 == 0) {
			v++;
		} else {
			n++;
		}
	}
	printf("%d %d", n, v);

	return 0;
}
