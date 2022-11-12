#include <stdio.h>

int main(void) {
	int j, p, x1, x2;
	scanf("%d %d %d %d", &j, &p, &x1, &x2);

		if (x1 >= j && x2 >= j) {
			printf("%d-Y %d-Y\n", x1, x2);
			printf("huan ying ru guan");
		}
		if ((x1 >= j && x1 < p) && x2 < j) {
			printf("%d-Y %d-N\n", x1, x2);
			printf("1: huan ying ru guan");
		}
		if ((x2 >= j && x2 < p) && x1 < j) {
			printf("%d-N %d-Y\n", x1, x2);
			printf("2: huan ying ru guan");
		}
		if (x1 < j && x2 < j) {
			printf("%d-N %d-N\n", x1, x2);
			printf("zhang da zai lai ba");
		}
		if (x1 < j && x2 >= p) {
			printf("%d-Y %d-Y\n", x1, x2);
			printf("qing %d zhao gu hao %d", x2, x1);
		}
		if (x1 >= p && x2 < j) {
			printf("%d-Y %d-Y\n", x1, x2);
			printf("qing %d zhao gu hao %d", x1, x2);
		}
	return 0;
}
