#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main(void) {
	float r, h, v;
	printf("请输入圆柱的半径和高：");
	scanf("%f %f", &r, & h);
	v = PI * r * r * h;
	printf("圆柱体积=%f", v);

	return 0;
}
