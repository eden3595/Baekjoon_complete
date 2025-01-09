#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

	for (int i = 0; i < 3; i++) {
		int num[4];
		scanf("%d %d %d %d", &num[0], &num[1], &num[2], &num[3]);
		int cnt = 0;
		for (int j = 0; j < 4; j++) {
			if (num[j] == 1) {
				cnt++;
			}
		}
		if (cnt == 0) {
			printf("D\n");
		}
		else if (cnt == 1) {
			printf("C\n");
		}
		else if (cnt == 2) {
			printf("B\n");
		}
		else if (cnt == 3) {
			printf("A\n");
		}
		else {
			printf("E\n");
		}
	}

	return 0;
}