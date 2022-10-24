#include <stdio.h>

int main(void) {
	int cxk;
	scanf("%d", &cxk);

	if (cxk == 1) {
		printf("³ª");
	} else if (cxk == 2) {
		printf("Ìø");
	} else if (cxk == 3) {
		printf("Rap");
	} else if (cxk == 4) {
		printf("ÀºÇò");
	} else if (cxk == 5) {
		printf("Music");
	} else {
		printf("Äã¸ÉÂï~~~°¥Ó´");
	}

	return 0;
}
