#include <stdio.h>

int main(void) {
	int N;
	int T;
	int i;
	scanf("%d", &N);

	T = N % 5;
	if (T > 0 && T <= 3) {
		printf("Fishing in day %d", N);
	} else {
		printf("Drying in day %d", N);
	}


	return 0;
}
