#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int kan(int n) {
	
	if (n == 0) {
		printf("-");
		return 0;
	}
	kan(n - 1);
	for (int i = 0; i < pow(3, n - 1); i++)printf(" ");
	kan(n - 1);
}

int main() {

	int N;
	while (scanf("%d", &N) != EOF) {
		kan(N);
		printf("\n");
	}

	return 0;
}