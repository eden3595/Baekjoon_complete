#include <stdio.h>
int main() {

	int x, y, w, h;
	scanf("%d %d %d %d", &x, &y, &w, &h);

	int a, b, c, d;
	
	a = x - 0;
	b = y - 0;
	c = w - x;
	d = h - y;

	int min = 999;

	if (a < min) {
		min = a;
	}
	if (b < min) {
		min = b;
	}
	if (c < min) {
		min = c;
	}
	if (d < min) {
		min = d;
	}
	printf("%d", min);

	return 0;
}