#include <stdio.h>
#include <math.h>

int main(void) {
	float a, b, c, s, t;
	printf("请输入三边长:");
	scanf("%f,%f,%f", &a, &b, &c);
	s = (a + b + c) / 2;
	t = sqrt( s * (s - a) * (s - b) * (s - c));
	printf("该三角形面积是%.2f", t);

	return 0;
}
