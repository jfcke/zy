#include <stdio.h>
int gbs(int a, int b);
int gys(int a, int b);

int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	gbs(a, b);
	gys(a, b);
	printf("%d %d", gys(a, b), gbs(a, b));

	return 0;
}

int gys(int a, int b) {
	int s = 0;
	while (a % b != 0) {
		s = a % b;
		a = b;
		b = s;
	}
	return b;
}

int gbs(int a, int b) {
	int c;
	c = (a * b) /  gys( a, b);
	return c;
}