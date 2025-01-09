#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int k = 0; k < i; k++) {
			printf(" ");
		}
		for (int j = n-i; j > 0; j--) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
