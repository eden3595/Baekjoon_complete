#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {

	int a, b, c;
	int d, e, f;
	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

	int determinant = a * e - b * d;
	int x, y;

	// 특수한 경우 처리
	if (determinant == 0) {
		printf("No unique solution\n");
		return 0;
	}

	// Cramer's 법칙 적용
	x = (c * e - b * f) / determinant;
	y = (a * f - c * d) / determinant;

	printf("%d %d", x, y);

	return 0;
}
