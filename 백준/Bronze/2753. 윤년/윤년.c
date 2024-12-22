#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {

	int N;
	scanf("%d", &N);

	if (N % 4 == 0) {
		if (N % 100 == 0) {
			if (N % 400 == 0) {
				printf("1");
			}
			else {
				printf("0");
			}
		}
		else {
			printf("1");
		}
	}
	else {
		printf("0");
	}

	return 0;
}