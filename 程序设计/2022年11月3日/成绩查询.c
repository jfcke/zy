#include <stdio.h>

int main(void) {
	int a;
	printf("��������ĳɼ���");
	scanf("%d", &a);
	a /= 10;
	switch (a) {
		case 10:
		case 9:
			printf("���ĳɼ��ȼ���5");
			break;
		case 8:
		case 7:
			printf("���ĳɼ��ȼ���4");
			break;
		case 6:
		case 5:
			printf("���ĳɼ��ȼ���3");
			break;
		case 4:
		case 3:
			printf("���ĳɼ��ȼ���2");
			break;
		default:
			printf("���ĳɼ��ȼ���1");
			break;
	}

	return 0;
}
