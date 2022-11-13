#include <stdio.h>

int main(void) {
	int year;
	int i;
	int a, b, c;
	scanf("%d", &year);
	for (i = 2001; i <= year; i++) {
		a = i % 4;
		b = i % 100;
		c = i % 400;
		if ((a == 0 && b != 0) || c == 0) {
			printf("%d\n", i);
		}
	}
	if (year < 2000) {
		printf("Invalid year!");
	}
	if (year >= 2001 && year < 2004) {
		printf("None");
	}

	return 0;
}
