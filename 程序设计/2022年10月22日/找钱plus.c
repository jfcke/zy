#include <stdio.h>

int main () {
	const int AMOUNT = 1000;
	int price = 0;

	printf("�������Ԫ��");
	scanf("%d", &price);

	int change = AMOUNT - price;

	printf("����%dԪ��", change);

	return 0;
}