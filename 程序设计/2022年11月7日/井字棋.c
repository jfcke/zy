#include <stdio.h>

int main() {
	const int size = 3;
	int board[size][size];
	int i, j;
	int numofx;
	int numofo;
	int result = -1;

	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			scanf("%d", &board[i][j]);
		}
	}

	for (i = 0; i < size && result == -1; i++) {
		numofo = numofx = 0;
		for (j = 0; j < size; j++) {
			if (board[i][j] == 1)
				numofx++;
			else {
				numofo++;
			}
		}
	}
	if (numofo == size) {
		result = 0;
	} else if (numofx == size) {
		result = 1;
	}
	if (result == -1) {
		for (j = 0; j < size; j++) {
			numofo = numofx = 0;
			for (i = 0; i < size; i++) {
				if (board[i][j] == 1)
					numofx++;
				else {
					numofo++;
				}
			}
		}
		if (numofx == size) {
			result = 1;
		} else if (numofo == size) {
			result = 0;
		}
	}
	numofo = numofx = 0;
	for (i = 0; i < size; i++) {
		if (board[i][i] == 1) {
			numofx++;
		} else {
			numofo++;
		}
	}
	if (numofo == size) {
		result = 0;
	} else if (numofx == size) {
		result = 1;
	}

	numofo = numofx = 0;
	for (i = 0; i < size; i++) {
		if (board[i][size - i - 1] == 1) {
			numofx++;
		} else {
			numofo++;
		}
	}
	if (numofo == size) {
		result = 0;
	} else if (numofx == size) {
		result = 1;
	}
	switch (result) {
		case 0:
			printf("numofo win!\n");
			break;
		case 1:
			printf("numofx win!\n");
			break;
		case -1:
			printf("no win!\n");
			break;
	}
	return  0;
}