#include <stdio.h>

int main(void) {
	/*	int N;            //whileѭ��
		int i = 1;
		int sum = 0;
		scanf("%d", &N);
		while (i <= N) {
			sum = sum + i;
			i++;
		}
		printf("%d", sum);
	*/
	/*	int N;                //do  whileѭ��
		int i = 0;
		int sum = 0;
		scanf("%d", &N);
		do {
			i++;
			sum = sum + i;
		} while (i < N);
		printf("%d", sum);*/
	int N;
	int i;
	int sum = 0;
	scanf("%d", &N);
	for (i = 1; i <= N; i++) {
		sum = sum + i;
	}
	printf("%d", sum);
	return 0;
}
