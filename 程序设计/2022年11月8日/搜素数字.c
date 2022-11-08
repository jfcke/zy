#include <stdio.h>

int search(int key, int a[], int len) {
	int ret = -1;
	for (int i = 0; i < len; i++) {
		if (key == a[i]) {
			ret = i;
			break;
		}
	}
	return ret;
}

int main() {
	int x;
	int r;
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 10};
	scanf("%d", &x);
	r = search(x, a, sizeof(a) / sizeof(a[0]));
	printf("%d\n", r);
	return 0;
}