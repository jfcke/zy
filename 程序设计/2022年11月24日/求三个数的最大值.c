#include <stdio.h>
int max(int a, int b, int c);

int main(void) {
	int a, b, c;
	int z;
	scanf("%d %d %d", &a, &b, &c);
	z = max(a, b, c);
	printf("最大值是%d", z);

	return 0;
}

int max(int a, int b, int c) {
	int ret;
	if (a > b && a > c) {
		ret = a;
	}
	if (b > a && b > c) {
		ret = b;
	}
	if (c > b && c > a) {
		ret = c;
	}
	return ret;
}