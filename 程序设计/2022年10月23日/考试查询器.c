#include <stdio.h>

int main(void) {
	const int Pass = 60;
	int score = 0;

	printf("���������ĳɼ���");
	scanf("%d", &score);
	printf("���ĳɼ���%d\n", score);

	if (score < Pass)
		printf("�ܱ�Ǹ����û��ͨ������\n");

	else {

		printf("��ϲ��ͨ���˿���^^\n");

		printf("��ӭ���´ι���");
	}
	return 0;
}
