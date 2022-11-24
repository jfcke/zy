#include <stdio.h>
int y(int a, int b);
int B(int a, int b);

int main() {
	int l, j;

	printf("请输入两个数字并求最大公约数和最小公倍数:\n");
	scanf("%d %d", &l, &j);
	y(l, j);
	B(l, j);
	printf("%d %d", y(l, j), B(l, j));
	return 0;
}

int y(int a, int b) {
	int s = 0;
	while ( a % b != 0) {

		s = a % b;
		a = b;
		b = s;

	}
	return b;
}

int B(int a, int b) {
	int n;
	if (a > b) {
		n = a;
	} else {
		n = b;
	}
	while (n) {
		if ((n % a == 0) && (n % b == 0)) {
			printf("%d", n);
			break;
		}
		n++;
	}
	return (n);
}

