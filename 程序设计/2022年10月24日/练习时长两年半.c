#include <stdio.h>

int main(void) {
	int cxk;
	printf("ÇëÊäÈëÒ»¸öÊı×Ö:\n");
	scanf("%d", &cxk);

	switch (cxk) {
		case 1:
			printf("³ª\n");
//			break;
		case 2:
			printf("Ìø\n");
//			break;
		case 3:
			printf("Rap\n");
//			break;
		case 4:
			printf("ÀºÇò\n");
//			break;
		case 5:
			printf("Music\n");
//			break;
		default:
			printf("Äã¸ÉÂï~~~°¥ßÏ\n");
			break;
	}

	return 0;
}
