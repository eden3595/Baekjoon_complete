#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#if 01

int key = 0;

int is_big(int a, int b, int c) {

	if (a > b && a > c) {
		key = a;
		return a;
	}
	else if (b > a && b > c) {
		key = b;
		return b;
	}
	else {
		key = c;
		return c;
	}

}


int main() {

	while (1) {

		int a;
		int b;
		int c;
		scanf("%d %d %d", &a, &b, &c);

		if (a == 0 && b == 0 && c == 0) {
			break;
		}

		int max = is_big(a, b, c);

		if (max == a) {
			if (b * b + c * c == a * a) {
				printf("right\n");
			}
			else {
				printf("wrong\n");
			}
		}
		else if (max == b) {
			if (a * a + c * c == b *b) {
				printf("right\n");
			}
			else {
				printf("wrong\n");
			}
		}
		else if (max == c) {
			if (b * b + a * a == c * c) {
				printf("right\n");
			}
			else {
				printf("wrong\n");
			}
		}





	}

	return 0;
}


#endif
