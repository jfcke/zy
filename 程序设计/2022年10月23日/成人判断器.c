#include <stdio.h>

int main(void) {
	int age = 0;
	const int minor = 35;

	printf("�������������䣺", age);
	scanf("%d", &age);
	printf("����������%d��\n", age);

	if (minor <= age) {
		printf("��ɢ���ų���Ĺ�â\n");
	}
	printf("����������ľ������磬�ú���ϧ�ɣ�");

	return 0;
}
