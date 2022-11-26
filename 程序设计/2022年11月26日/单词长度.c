#include <stdio.h>

int main () {
	char ch;
	int count = 0;
	while (1) {
		int a = 0;
		scanf("%c", &ch);
		while (ch != '\n' && ch != ' ' && ch != '.') {
			a++;
			scanf("%c", &ch);
		}
		if (a != 0) {
			count++;
			if (count == 1)
				printf("%d", a);
			else
				printf(" %d", a);
		}
		if (ch == '.')
			break;
	}
	return 0;
}
