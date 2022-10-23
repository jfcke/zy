#include <stdio.h>

int main() {
	int price = 0;
	int bill = 0;

	printf("请输入金额：");
	scanf("%d", &price);
	printf("请输入面额");
	scanf("%d", &bill);

	if (bill >= price) {

		printf("应该找您%d\n", bill - price);

	} else {

		printf("没钱滚蛋");
	}

	return 0;
}