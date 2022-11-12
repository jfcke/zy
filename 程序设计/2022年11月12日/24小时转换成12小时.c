#include <stdio.h>

int main(void) {
	int h, m;
	scanf("%d:%d", &h, &m);
	if (h >= 12) {
		h = h - 12;
		printf("%d:%d PM", h, m);
	}
	else{
		printf("%d:%d AM", h, m);
	}
     

	return 0;
}
