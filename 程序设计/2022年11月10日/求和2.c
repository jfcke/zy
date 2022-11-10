#include <stdio.h>

int main(void) {
	/*	int n;            //while—≠ª∑
		int i = 1;
		int sum = 0;
		scanf("%d", &n);
		while (i <= n) {
			sum = sum + i;
			i = i + 2;
		}
		printf("%d", sum);*/
	/*	int n;                //do  while—≠ª∑
		int i = 1;
		int sum = 0;
		scanf("%d", &n);
		do {
			sum = sum + i;
			i += 2;
		} while (i < n);
		sum += i;
		printf("%d", sum);*/
	int n;                 //for—≠ª∑
	int i;
	int sum = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i += 2) {
		sum = sum + i;
	}
	printf("%d", sum);
	return 0;
}