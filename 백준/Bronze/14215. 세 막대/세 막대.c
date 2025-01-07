#include <stdio.h>
int main() {

	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	int max = 0;
	int m=0;
	int n = 0;
	if (a >= max) {
		max = a;
		m = b;
		n = c;
	}
	if (b >= max) {
		max = b;
		m = a;
		n = c;
	}
	if (c >= max) {
		max = c;
		m = b;
		n = a;
	}

	while (1) {


		if (m + n > max) {
			printf("%d", m + n + max);
			break;
		}
		else {
			max--;
		}
	}

	
	return 0;
}