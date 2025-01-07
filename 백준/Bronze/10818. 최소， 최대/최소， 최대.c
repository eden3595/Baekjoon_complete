#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {

	int n;
	scanf("%d", &n);

	int* num = (int*)malloc(n * sizeof(int));
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}

	int max = -9999999;
	int min = 9999999;

	for (int i = 0; i < n; i++) {
		if (num[i] > max) {
			max = num[i];
		}
		if (num[i] < min) {
			min = num[i];
		}
	}

	printf("%d %d", min, max);


	free(num);

	return 0;
}