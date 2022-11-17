#include <stdio.h>

int main(void) {
	int N, H, W;
	float a, b, c, d;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &H, &W);
		a = (H - 100) * 0.9 * 2;
		b = a * 0.1;
		c = W - a;
		if (c > 0) {
			if (c < b) {
				printf("You are wan mei!\n");
			}
			if (c > b) {
				printf("You are tai pang le!\n");
			}
			if (c == b) {
				printf("You are tai shou le!\n");
			}
		}
		if (c < 0) {
			c = -c;
			if (-c < b) {
				printf("You are wan mei!\n");
			}
			if (-c > b) {
				printf("You are tai pang le!\n");
			}
			if (-c == b) {
				printf("You are tai shou le!\n");
			}
		}

	}

	return 0;
}
