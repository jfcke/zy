#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main(void) {
	float r, C, V;
	printf("����������뾶��");
	scanf("%f", &r);
	C = 4 * PI * r * r;
	V = 4 / 3 * PI * r * r * r;
	printf("��ı����=%.2f,���=%.2f", C, V);

	return 0;
}
