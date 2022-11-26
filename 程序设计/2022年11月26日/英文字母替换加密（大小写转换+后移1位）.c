#include <stdio.h>

int main() {
	char ch;
	ch = getchar();
	while (ch != '\n') {
		if (ch >= 'A' && ch <= 'Z') {
			if (ch == 'Z') {
				ch = ch - 'A' + 'a' - 25;
			} else {
				ch = ch - 'A' + 'a' + 1;
			}
		} else if (ch >= 'a' && ch <= 'z') {
			if (ch == 'z') {
				ch = ch - 'a' + 'A' - 25;
			} else {
				ch = ch - 'a' + 'A' + 1;
			}
		}
		putchar(ch);
		ch = getchar();
	}
	return 0;
}
