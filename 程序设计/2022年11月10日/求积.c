#include <stdio.h>

int main(void) {
	int n;                   //while—≠ª∑
	int i = 1;
	int sum = 1;
	scanf("%d", &n);
	while (i <= n) {
		sum *= i;
		i++;
	}
	printf("%d", sum);

	/*	int n;                //do  while—≠ª∑
		int i = 0;
		int sum = 1;
		scanf("%d", &n);
		do {
			i++;
			sum = sum * i;
		} while (i < n);
		printf("%d", sum);*/
	/*	int n;                 //for—≠ª∑
		int i;
		int sum = 1;
		scanf("%d", &n);
		for (i = 1; i <= n; i++) {
			sum = sum * i;
		}
		printf("%d", sum);*/
	return 0;
}
