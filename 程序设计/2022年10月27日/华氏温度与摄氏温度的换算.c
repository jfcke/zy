#include <stdio.h>

int main(void) {
	float f, c;
	printf("请输入一个华氏温度：");
	scanf("%f", &f);

	c = (5.0 / 9) * (f - 32);
	printf("该华氏温度对应的摄氏温度为；%lf", c);

	return 0;
}
