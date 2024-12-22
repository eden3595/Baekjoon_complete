#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

	int n;
	scanf("%d", &n);

	int num[500][500] = { 0 };


	for (int i = 0; i < n; i++) {
		int a = 0;
		int b = 0;
		scanf("%d %d", &a, &b);

		for (int j = a; j < a + 10; j++) {
			for (int k = b; k < b + 10; k++) {
				num[j][k] = 1;
			}
		}

	}

	int cnt = 0;
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (num[i][j] == 1) {
				cnt++;
			}
		}
	}

	printf("%d", cnt);

	return 0;
}