#include <stdio.h>

int main(void) {
	char c;
	int a, b;
	float money;
	scanf("%d %d %c", &a, &b, &c);
	switch (c) {
		case 'm':
			if (b == 90) {
				money = a * 6.95 * 0.95;
				printf("%.2f", money);

				break;
			}
			if (b == 93) {
				money = a * 7.44 * 0.95;
				printf("%.2f", money);

				break;
			}
			if (b == 97) {
				money = a * 7.93 * 0.95;
				printf("%.2f", money);

				break;
			}
		case 'e':
			if (b == 90) {
				money = a * 6.95 * 0.97;
				printf("%.2f", money);

				break;
			}
			if (b == 93) {
				money = a * 7.44 * 0.97;
				printf("%.2f", money);

				break;
			}
			if (b == 97) {
				money = a * 7.93 * 0.97;
				printf("%.2f", money);

				break;
			}
	}



	return 0;
}
