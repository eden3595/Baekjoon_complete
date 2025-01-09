#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	
	unsigned int a, b;
	scanf("%u %u", &a, &b);

	if (a > b) {
		printf("%u\n", a-b - 1);
		for (unsigned int i = b + 1; i < a; i++) {
			printf("%u ", i);
		}
	}
	else if (a == b) {
		printf("0");
	}
	else {
		printf("%u\n", b - a - 1);
		for (unsigned int i = a + 1; i < b; i++) {
			printf("%u ", i);
		}
	}
	

	

	return 0;
}