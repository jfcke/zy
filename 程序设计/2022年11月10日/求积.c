#include <stdio.h>

int main(void) {
	int n;                   //whileѭ��
	int i = 1;
	int sum = 1;
	scanf("%d", &n);
	while (i <= n) {
		sum *= i;
		i++;
	}
	printf("%d", sum);

	/*	int n;                //do  whileѭ��
		int i = 0;
		int sum = 1;
		scanf("%d", &n);
		do {
			i++;
			sum = sum * i;
		} while (i < n);
		printf("%d", sum);*/
	/*	int n;                 //forѭ��
		int i;
		int sum = 1;
		scanf("%d", &n);
		for (i = 1; i <= n; i++) {
			sum = sum * i;
		}
		printf("%d", sum);*/
	return 0;
}
