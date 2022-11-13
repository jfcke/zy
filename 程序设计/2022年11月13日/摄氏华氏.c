#include <stdio.h>

int main(void) {
	int lower;
	int upper;
	double celsius;
	scanf("%d %d", &lower, &upper);
	if (lower <= upper && lower <= 100 && upper <= 100) {
		printf("fahr celsius\n");
		for (lower; lower <= upper; lower = lower + 2) {
			celsius = 5.0 * (lower - 32) / 9;
			printf("%d%6.1f\n", lower, celsius);
		}
	} else {
		printf("Invalid.");
	}
	return 0;
}
