#include <stdio.h>
int main() {

	int a, b;
	scanf("%d %d", &a, &b);

	int small = 0;
	int big = 0;
	if (a > b) {
		small = b;
		big = a;
	}
	else {
		small = a;
		big = b;
	}

	int k=1;

	for (int i = 2; i <= small; i++) {
		if (a % i == 0 && b % i == 0) {
			k = i;
		}
	}

	int l;


	l = a * b / k;
	

	printf("%d\n", k);
	printf("%d", l);

	return 0;
}