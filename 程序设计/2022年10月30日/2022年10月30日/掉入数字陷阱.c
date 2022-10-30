#include <stdio.h>

int main(void) {
	int start, end;
	int hour, minute;
	scanf("%d %d", &start, &end);
	start = start / 100 * 60 + start % 100;
	end = end / 100 * 60 + end % 100;
	hour = (end - start) / 60;
	minute = (end - start) % 60;
	printf("%02d:%d", hour, minute);

	return 0;
}
