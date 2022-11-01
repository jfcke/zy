#include <stdio.h>

int main(void) {
	int JianDao, ChuiZi, Bu, End, K, a;
	int i = 0;
	scanf("%d\n", &K);
	scanf("%d\n", &a);
	if (K > 0 && K <= 10) {
		while (i = 0) {

			while (i < K) {
				if (a == JianDao) {
					printf("ChuiZi\n");

				} else if (a == ChuiZi) {
					printf("Bu\n");

				} else if (a == Bu) {
					printf("JianDao\n");

				} else

					if (a == End) {
						break;

					}
				i += 1;

			}
			i = 0;
		}
	} 

	return 0;
}
/*	for (i = 0; i < K; i++) {
			if (scanf("%d\n", &JianDao)) {
				printf("%d\n", ChuiZi);

			}
			if (scanf("%d\n", &ChuiZi)) {
				printf("%d\n", Bu);

			}
			if (scanf("%d\n", &Bu)) {
				printf("%d\n", JianDao);

			}

			if (scanf("%d\n", &End)) {
				break;

			}



		}*/