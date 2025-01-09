#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

	int n;
	scanf("%d", &n);

	// 위쪽 절반
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i + 1; j++) {
			printf("*");
		}
		for (int k = 0; k < 2 * (n - i - 1); k++) {
			printf(" ");
		}
		for (int j = 0; j < i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}

	// 아래쪽 절반
	for (int i = n - 2; i >= 0; i--) {
		for (int j = 0; j < i + 1; j++) {
			printf("*");
		}
		for (int k = 0; k < 2 * (n - i - 1); k++) {
			printf(" ");
		}
		for (int j = 0; j < i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
