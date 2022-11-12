#include <stdio.h>

int main(void) {
	int money;
	float tax;
	scanf("%d", &money);
	if (money < 1600 && money > 0) {
		tax = 0 * (money - 1600);
		printf("%.2f", tax);
	}
	if (money > 1600 && money <= 2500) {
		tax = 0.05 * (money - 1600);
		printf("%.2f", tax);
	}
	if (money > 2500 && money <= 3500) {
		tax = 0.1 * (money - 1600);
		printf("%.2f", tax);
	}
	if (money > 3500 && money <= 4500) {
		tax = 0.15 * (money - 1600);
		printf("%.2f", tax);
	}
	if (money > 4500) {
		tax = 0.2 * (money - 1600);
		printf("%.2f", tax);
	}


	return 0;
}
