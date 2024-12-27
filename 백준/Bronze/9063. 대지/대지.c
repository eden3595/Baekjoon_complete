#include <stdio.h>

int main() {

	int k;
	scanf("%d", &k);
	
	int x = 999;
	int y = 999;

	int m = -999;
	int n = -999;
	int a, b;

	for (int i = 0; i < k; i++) {
		scanf("%d %d", &a, &b);
		if (a < x) {
			x = a;
		}
		if (a > m) {
			m = a;
		}
		if (b < y) {
			y = b;
		}
		if (b > n) {
			n = b;
		}
	}

	printf("%d", (x-m)*(y-n));

	return 0;
}
