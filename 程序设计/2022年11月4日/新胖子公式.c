#include <stdio.h>

int main(void) {
	float k, m, o;
	scanf("%f %f", &k, &m);
	o = k / (m * m);
	if (o > 25) {
		printf("%.1f\n", o);
		printf("PANG");
	} else {
		printf("%.1f\n", o);
		printf("Hai Xing");
	}

	return 0;
}
