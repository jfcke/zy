#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);

	int cnt = 1;
	while (n != 250) {
		cnt++;
		scanf("%d", &n);
	}
	printf("%d", cnt);

	return 0;
}