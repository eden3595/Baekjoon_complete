#include <stdio.h>
int main() {

	int a;
	int b;
	int c;
	scanf("%d %d %d", &a, &b, &c);

	if (a == b && b == c) {
		printf("%d", 10000 + a * 1000);
	}
	else if (a == b && b != c) {
		printf("%d", 1000 + a * 100);
	}
	else if (a == c && b != c) {
		printf("%d", 1000 + a * 100);
	}
	else if (c == b && b != a) {
		printf("%d", 1000 + b * 100);
	}
	else {
		int max = a;
		if (b > max) {
			max = b;
		}
		if (c > max) {
			max = c;
		}
		printf("%d", max * 100);
	}

	return 0;
}