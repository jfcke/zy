#include <stdio.h>

int main() {
	int price = 0;
	int bill = 0;

	printf("�������");
	scanf("%d", &price);
	printf("���������");
	scanf("%d", &bill);

	if (bill >= price) {

		printf("Ӧ������%d\n", bill - price);

	} else {

		printf("ûǮ����");
	}

	return 0;
}