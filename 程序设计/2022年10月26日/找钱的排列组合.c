#include <stdio.h>

int main() {

	int one, twe, five;
	int x;

	scanf("%d", &x);

	for (one = 1; one < x * 10; one++) {
		for (twe = 1; twe < x * 10 / 2; twe++) {
			for (five = 1; five < x * 10 / 5; five++) {
				if (one + twe * 2 + five * 5 == x * 10)
					printf("������%d��һ�Ǽ�%d�����Ǽ�%d����ǵõ�%dԪ\n", one, twe, five, x);
			}
		}
	}
	return 0;
}
