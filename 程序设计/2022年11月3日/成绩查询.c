#include <stdio.h>

int main(void) {
	int a;
	printf("请输入你的成绩：");
	scanf("%d", &a);
	a /= 10;
	switch (a) {
		case 10:
		case 9:
			printf("您的成绩等级是5");
			break;
		case 8:
		case 7:
			printf("您的成绩等级是4");
			break;
		case 6:
		case 5:
			printf("您的成绩等级是3");
			break;
		case 4:
		case 3:
			printf("您的成绩等级是2");
			break;
		default:
			printf("您的成绩等级是1");
			break;
	}

	return 0;
}
