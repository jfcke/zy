#include <stdio.h>

int main(void) {
	char a;
	int b = 0;
	int c = 0;
	int d = 0;
	while (	scanf("%c", &a) && a != '\n') {
		switch (a) {
			case ' ':
				b++;
				break;
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
				c++;
				break;
			default :
				d++;
				break;
		}
	}
	printf("blank = %d, digit = %d, other = %d", b, c, d);

	return 0;
}
