#include <stdio.h>

int main(void) {
	int a, b;
	int t;
	scanf("%d", &a, &b);

	while (b != 0) {
		t = a % b;
		a = b;
		b = t;
	}
	printf("最大公约数是%d", a);
	return 0;
}

