#include <stdio.h>

int main(void) {
#include <stdio.h>
	int main() {
		char ch, x = ' ';
		ch = getchar();
		int i;
		int count = 0;
		for (i = 0; ch != '\n'; i++) {
			if (x == ' ' && ch != ' ' && ch != '\n' && ch != '.')
				count++;
			x = ch;
			ch = getchar();
		}
		printf("%d", count);
		return 0;
	}
}