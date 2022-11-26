#include <stdio.h>

int main(void) {
	int a;
	int x[100], y[100], z[100];
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		scanf("%d %d %d", &x[i], &y[i], &z[i]);
	}
	for (int i = 0; i < a; i++) {

		if (x[i] * x[i] + y[i] * y[i] + z[i] * z[i] == 3 * x[i] * y[i] * z[i]) {
			printf("Yes\n");
		} else {
			printf("No\n");
		}

	}

	return 0;
}
