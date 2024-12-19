#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

	int num[10][10];

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			scanf("%d", &num[i][j]);
		}
	}
	
	int max = -999;
	int a = -1;
	int b = -1;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (num[i][j] > max) {
				max = num[i][j];
				a = i;
				b = j;
			}
		}
	}
	
	printf("%d\n", max);
	printf("%d %d", a+1, b+1);

	return 0;
}