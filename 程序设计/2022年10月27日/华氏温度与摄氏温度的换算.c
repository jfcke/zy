#include <stdio.h>

int main(void) {
	float f, c;
	printf("������һ�������¶ȣ�");
	scanf("%f", &f);

	c = (5.0 / 9) * (f - 32);
	printf("�û����¶ȶ�Ӧ�������¶�Ϊ��%lf", c);

	return 0;
}
