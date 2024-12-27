#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#if 01


int main() {

	int n, m;
	scanf("%d %d", &n, &m);

	int num[101] = { 0 };

	for (int i = 0; i < m; i++) {
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);

		for (int k = a; k <= b; k++) {

			num[k] = c;
		}
	}

	for (int i = 1; i <= n; i++) {
		printf("%d ", num[i]);
	}


	return 0;
}

#endif