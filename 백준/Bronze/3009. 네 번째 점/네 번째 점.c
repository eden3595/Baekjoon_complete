
#include <stdio.h>

int main() {

	int a, b;
	int c, d;
	int e, f;

	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);
	scanf("%d %d", &e, &f);

	int x, y;
	if (a == c) {
		x = e;
	}
	else if (a == e) {
		x = c;
	}
	else if (c == e) {
		x = a;
	}

	if (b == d) {
		y = f;
	}
	else if (b == f) {
		y = d;
	}
	else if (f == d) {
		y = b;
	}
	printf("%d %d", x, y);

	return 0;
}