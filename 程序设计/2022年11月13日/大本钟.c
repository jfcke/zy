#include <stdio.h>

int main(void) {
	int h, m;
	int i;
	scanf("%d %d", &h, &m);
	if (h >= 0 && h < 12) {
		printf("Only %02d:%02d.  Too early to Dang.", h, m);
	}
	if (h == 12 && m == 0) {
		printf("Only 12:00.  Too early to Dang.");
	}
	if (h == 12 && m != 0) {
		printf("Dang");
	}
	if (h > 12) {
		if (m != 0) {
			h = h + 1;
			h = h - 12;
			for (i = 1; i <= h; i++) {
				printf("Dang");
			}
		} else if (m > 0) {
			h = h - 12;
			for (i = 1; i <= h; i++) {
				printf("Dang");
			}
		}
	}

	return 0;
}
