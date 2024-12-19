#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int c = 2 * (n - 1);

	// 패턴의 윗부분
	for (int i = 1; i <= c; i += 2) {
		for (int k = 0; k <= (c - i) / 2; k++) {
			printf(" ");
		}
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}

	// 패턴의 가운데 줄
	for (int i = 0; i <= c; i++) {
		printf("*");
	}
	printf("\n");

	// 패턴의 아랫부분
	for (int i = c - 1; i >= 1; i -= 2) {
		for (int k = 0; k <= (c - i) / 2; k++) {
			printf(" ");
		}
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}