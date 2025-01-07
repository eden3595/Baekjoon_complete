#include <stdio.h>
int fac(int n) {
	if (n <= 1) {
		return 1;
	}
	else {
		return n* fac(n - 1);
	}
}

int main() {


	int n;
	int k;
	scanf("%d %d", &n, &k);


	int num = fac(n) / (fac(k) * fac(n - k));
	printf("%d", num);

	return 0;
}
