#include <stdio.h>

int main(void) {
	/*float n;            //whileѭ��
	float i = 1;
	float sum = 0;
	scanf("%f", &n);
	while (i <= n) {
		sum = sum + 1 / i;
		i++;
	}
	printf("%f", sum);*/
	/*	float n;                //do  whileѭ��
		float i = 0;
		float sum = 0;
		scanf("%f", &n);
		do {
			i++;
			sum = sum + 1 / i;
		} while (i < n);
		printf("%f", sum);*/
	float n;                //forѭ��
	float i = 1;
	float sum = 0;
	scanf("%f", &n);
	for (i = 1; i <= n; i++) {
		sum = sum + 1 / i;
	}
	printf("%f", sum);
	return 0;
}
