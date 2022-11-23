#include <stdio.h>
#include <string.h>

int main(void) {
	int k;
	char a[20];
	int cnt = 0;
	scanf("%d", &k);
	k++;
	while (scanf("%s", &a)) {
		if (strcmp(a, "End") == 0) {
			break;
		}
		cnt++;
		if (k == cnt) {
			printf("%s\n", a);
			cnt = 0;
		} else if (strcmp(a, "Bu") == 0) {
			printf("JianDao\n");
		} else if (strcmp(a, "JianDao") == 0) {
			printf("ShiTou\n");
		} else if (strcmp(a, "ShiTou") == 0) {
			printf("Bu\n");
		}
	}
	return 0;
}