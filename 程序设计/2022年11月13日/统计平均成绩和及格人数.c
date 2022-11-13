#include <stdio.h>

int main(void) {
	int num;
	int i;
	int grade;
	float average = 0;
	int count = 0;
	scanf("%d", &num);
	for (i = 0; i < num; i++) {
		scanf("%d", &grade);
		average += grade;
		if (grade >= 60) {
			count += 1;
		}
	}
	average /= i;
	printf("average = %.1f\n", average);
	printf("count = %d", count);

	return 0;
}
