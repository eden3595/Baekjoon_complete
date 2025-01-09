#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

	int num[21];
	for (int i = 1; i <= 20; i++) {
		num[i] = i;
	}

	for (int i = 0; i < 10; i++) {
		int a, b;
		scanf("%d %d", &a, &b);

		for (int j = 0; j <= (b - a) / 2; j++) {
			int tmp = num[a + j];
			num[a + j] = num[b - j];
			num[b - j] = tmp;
		}
	}

	for (int i = 1; i <= 20; i++) {
		printf("%d ", num[i]);
	}

	return 0;
}
