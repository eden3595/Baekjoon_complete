#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

	int n;
	scanf("%d", &n);

	int num[10];

	int round = 0;
	while (1) {
		if (n == 0) {
			break;
		}
		num[round] = n % 10;
		n = n / 10;
		round++;
	}

	int cnt = 0;
	int ind[10] = { 0 };
	for (int i = 0; i < round; i++) {
		if (num[i] == 6 || num[i] == 9) {
			cnt++;
		}
		int k = num[i];
		ind[k]++;
	}

	int max = -999;
	for (int j = 0; j < 10; j++) {
		if (j != 6 && j != 9) {
			if (ind[j] > max) {
				max = ind[j];
			}
		}

	}

	if (max > (cnt+1) / 2) {
		printf("%d", max);
	}
	else {
		printf("%d", (cnt+1) / 2);
	}

	return 0;
}
