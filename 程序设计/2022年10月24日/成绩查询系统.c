#include <stdio.h>

int main(void) {
	int grade;
	printf("请输入您的分数（0~~100）：\n");
	scanf("%d", &grade);

	grade /= 10;
	switch (grade) {
		case 10:
		case 9:
			printf("您的成绩是A");
			break;
		case 8:
			printf("您的成绩是B");
			break;
		case 7:
		case 6:
			printf("您的成绩是C");
			break;
		default:
			printf("您的成绩是D");
			break;
	}
	return 0;
}
