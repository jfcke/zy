#include <stdio.h>

int main(void) {
	int w;
	float money;
	scanf("%d", &w);
	if (w >= 0) {
		if (w >= 0 && w <= 50) {
			money = w * 0.53;
			printf("cost = %.2f", money);
		} else {
			money = 26.5 + (w - 50) * 0.58;
			printf("cost = %.2f", money);
		}
	} else {
		printf("Invalid Value!");
	}

	return 0;
}
