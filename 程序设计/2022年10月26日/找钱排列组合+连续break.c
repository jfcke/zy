#include <stdio.h>

int main() {

	int one, twe, five;
	int x;
	int exit = 0;
	scanf("%d", &x);

	for (one = 1; one < x * 10; one++) {
		for (twe = 1; twe < x * 10 / 2; twe++) {
			for (five = 1; five < x * 10 / 5; five++) {
				if (one + twe * 2 + five * 5 == x * 10) {

					printf("可以用%d个一角加%d给两角加%d个五角得到%d元\n", one, twe, five, x);
					exit = 1;
					break;
				}
			}
			if (exit)
				break;

		}
		if (exit)
			break;
	}

	return 0;
}
