#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {


	float A;
	float B;

	scanf("%f %f", &A, &B);
	printf("%.9f", (double)A/(double)B);

	return 0;
}