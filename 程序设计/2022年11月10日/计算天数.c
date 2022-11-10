#include <stdio.h>

int main() {
	int year, month, day;
	int a, b, c;
	scanf("%d/%d/%d", &year, &month, &day);
	a = year % 4;
	b = year % 100;
	c = year % 400;
	if ((a == 0 && b != 0) || c == 0) {
		switch (month) {
			case 1:
				printf("%d", day);
				break;
			case 2:
				printf("%d", day + 31);
				break;
			case 3:
				printf("%d", day + 60);
				break;
			case 4:
				printf("%d", day + 91);
				break;
			case 5:
				printf("%d", day + 121);
				break;
			case 6:
				printf("%d", day + 152);
				break;
			case 7:
				printf("%d", day + 182);
				break;
			case 8:
				printf("%d", day + 213);
				break;
			case 9:
				printf("%d", day + 244);
				break;
			case 10:
				printf("%d", day + 274);
				break;
			case 11:
				printf("%d", day + 305);
				break;
			case 12:
				printf("%d", day + 335);
				break;
		}
	} else {
		switch (month) {
			case 1:
				printf("%d", day);
				break;
			case 2:
				printf("%d", day + 31);
				break;
			case 3:
				printf("%d", day + 59);
				break;
			case 4:
				printf("%d", day + 90);
				break;
			case 5:
				printf("%d", day + 120);
				break;
			case 6:
				printf("%d", day + 151);
				break;
			case 7:
				printf("%d", day + 181);
				break;
			case 8:
				printf("%d", day + 212);
				break;
			case 9:
				printf("%d", day + 243);
				break;
			case 10:
				printf("%d", day + 273);
				break;
			case 11:
				printf("%d", day + 304);
				break;
			case 12:
				printf("%d", day + 334);
				break;
		}

	}

	return 0;
}