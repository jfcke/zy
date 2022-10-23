#include <stdio.h>

int main(void) {
	int age = 0;
	const int minor = 35;

	printf("请输入您的年龄：", age);
	scanf("%d", &age);
	printf("您的年龄是%d岁\n", age);

	if (minor <= age) {
		printf("您散发着成熟的光芒\n");
	}
	printf("年龄决定您的精神世界，好好珍惜吧！");

	return 0;
}
