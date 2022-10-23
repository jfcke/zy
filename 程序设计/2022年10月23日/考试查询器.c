#include <stdio.h>

int main(void) {
	const int Pass = 60;
	int score = 0;

	printf("请输入您的成绩：");
	scanf("%d", &score);
	printf("您的成绩是%d\n", score);

	if (score < Pass)
		printf("很抱歉，您没有通过考试\n");

	else {

		printf("恭喜您通过了考试^^\n");

		printf("欢迎您下次光临");
	}
	return 0;
}
