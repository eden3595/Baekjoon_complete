#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {

	int N;
	int ddouble[5];
	int add;
	for (int i = 0; i <= 4; i++) {
		scanf("%d", &N);
		ddouble[i] = N * N;
		
	}
	int sum;
	sum = ddouble[0] + ddouble[1] + ddouble[2] + ddouble[3] + ddouble[4];

	printf("%d", sum % 10);
	return 0;
}