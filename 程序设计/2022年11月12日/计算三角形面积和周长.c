#include <stdio.h>
#include <math.h>

int main(void) {
	int a, b, c;
	double s;
	double l;
	scanf("%d %d %d", &a, &b, &c);
	if (a + b > c && b + c > a && a + c > b) {
		l = a + b + c;
		s = l / 2 * (l / 2 - a) * (l / 2 - b) * (l / 2 - c);
		s = sqrt(s);
		printf("area = %.2f; perimeter = %.2f", s, l);
	} else {
		printf("These sides do not correspond to a valid triangle");
	}

	return 0;
}
