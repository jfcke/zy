#include <stdio.h>
int su();

int main(void) {
	int b;
	int z;
	scanf("%d", &b);
	z = su(b);
	if (z == 1) {
		printf("%d是素数", b);
	} else {
		printf("%d不是素数", b);
	}

	return 0;
}

int su(int a) {
	int m;
	int ret = 1;
	for (m = 2; m < a - 1; m++) {
		if (a % m == 0) {
			ret = 0;
			break;
		}
	}
	return ret;
}