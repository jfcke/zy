#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main(void) {
	float r, h, v;
	printf("������Բ���İ뾶�͸ߣ�");
	scanf("%f %f", &r, & h);
	v = PI * r * r * h;
	printf("Բ�����=%f", v);

	return 0;
}
