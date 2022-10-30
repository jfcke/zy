#include <stdio.h>
#include <math.h>

int main(void) {
	int money, year;
	float interest, rate;
//	rate = 0.025;
//	money = 1000;
//	year = 3;
	scanf("%d %d %lf", &money, &year, &rate);
	interest = money * pow((1 + rate), year) - money;

	printf("interest = %.2f\n", interest);
	return 0;

}
