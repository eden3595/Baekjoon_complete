#include <stdio.h>
int main() {

	int n, m;
	scanf("%d %d", &n, &m);

	int num[101] = { 0 };

	for (int i = 1; i <= n; i++) {
		num[i] = i;
	}

	int copy[101] = { 0 };

	for (int i = 0; i < m; i++) {
		int a, b;
		scanf("%d %d", &a, &b);

		for (int k = a; k <= b; k++) {
			copy[k] = num[k];
		}
		for (int j = a; j<=b; j++) {
			num[j] = copy[b-(j-a)];
		}
	}

	for (int i = 1; i <= n; i++) {
		printf("%d ", num[i]);
	}

	return 0;
}