#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>




int main() {

	int m, n;
	scanf("%d %d", &m, &n);

	long long int cnt = 0;
	int min = n+1;
	
	for (int i = m; i <= n; i++) {
		if (i < 2) continue;
		int right = 0;
		for (int j = 2; j*j <= i; j++) {
			if (i % j == 0) {
				right = 1;
			}
		}
		if (right == 0) {
			cnt = cnt + i;
			if (i < min) {
				min = i;
			}
		}
	}

	if (cnt == 0) {
		printf("-1");
	}
	else {
		printf("%lld\n%d", cnt, min);
	}

	return 0;
}
