#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	
	unsigned long long a, b;
	scanf("%llu %llu", &a, &b);

	if (a > b) {
		printf("%llu\n", a - b - 1);
		for (unsigned long long i = b + 1; i < a; i++) {
			printf("%llu ", i);
		}
	}
	else if (a == b) {
		printf("0");
	}
	else {
		printf("%llu\n", b - a - 1);
		for (unsigned long long i = a + 1; i < b; i++) {
			printf("%llu ", i);
		}
	}
	
	return 0;
}
