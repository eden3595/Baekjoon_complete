
#include <stdio.h>
int main() {

	int n, m;
	scanf("%d %d", &n, &m);

	int num[101] = { 0 };

	for (int i = 1; i <= n; i++) {
		num[i] = i;
	}

	for (int i = 0; i < m; i++) {
		int a, b;
		scanf("%d %d", &a, &b);

		int tmp = num[a];
		num[a] = num[b];
		num[b] = tmp;
	}

	for (int i = 1; i <= n; i++) {
		printf("%d ", num[i]);
	}


	return 0;
}