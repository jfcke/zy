#include <stdio.h>

int main(void) {
	int cxk;
	printf("������һ������:\n");
	scanf("%d", &cxk);

	switch (cxk) {
		case 1:
			printf("��\n");
//			break;
		case 2:
			printf("��\n");
//			break;
		case 3:
			printf("Rap\n");
//			break;
		case 4:
			printf("����\n");
//			break;
		case 5:
			printf("Music\n");
//			break;
		default:
			printf("�����~~~����\n");
			break;
	}

	return 0;
}
