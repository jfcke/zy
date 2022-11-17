#include <stdio.h>


int main() {
	int N, i;
	double high;
	char a;
	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		getchar();
		scanf("%c %lf", &a, &high);
		if (a == 'M') {
			printf("%.2lf\n", high / 1.09);
		} else {
			printf("%.2lf\n", high * 1.09);
		}
	}
}