#include <stdio.h>

int main(void) {
	int grade;
	printf("���������ķ�����0~~100����\n");
	scanf("%d", &grade);

	grade /= 10;
	switch (grade) {
		case 10:
		case 9:
			printf("���ĳɼ���A");
			break;
		case 8:
			printf("���ĳɼ���B");
			break;
		case 7:
		case 6:
			printf("���ĳɼ���C");
			break;
		default:
			printf("���ĳɼ���D");
			break;
	}
	return 0;
}
