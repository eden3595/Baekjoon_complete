#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

	unsigned int a, b, c;
	scanf("%u %u %u", &a, &b, &c);

	if (a > b && a > c) {
		if (b > c) {
			printf("%u %u %u", c, b, a);
		}
		else {
			printf("%u %u %u", b, c, a);
		}
	}
	else if (b > a && b > c) {
		if (a > c) {
			printf("%u %u %u", c, a,b);
		}
		else {
			printf("%u %u %u", a, c,b);
		}
	}
	else if (c > a && c > b) {
		if (a > b) {
			printf("%u %u %u", b,a,c);
		}
		else {
			printf("%u %u %u", a,b,c);
		}

	}

	return 0;
}