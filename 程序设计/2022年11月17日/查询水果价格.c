#include <stdio.h>

int main(void) {
	float price;
	int n;
	printf("[1] apple\n");
	printf("[2] pear\n");
	printf("[3] orange\n");
	printf("[4] grape\n");
	printf("[0] exit\n");
	for (int i = 0; i < 5; i++) {
		scanf("%d", &n);
		if (price == 0) {
			break;
		} 
		switch (n){
			case 1: price=3.00;break;
			case 2: price=2.50;break;
			case 3: price=4.10;break;
			case 4: price=10.20;break;
			default: price=0.00;break;
		}
		printf("price = %.2f\n",price);
	}
	return 0;
}
