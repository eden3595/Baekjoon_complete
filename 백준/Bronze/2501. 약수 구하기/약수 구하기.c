#include <stdio.h>

int main() {

	int n;
	int k;
	scanf("%d %d", &n, &k);

	int i = 1;
	int j = 0;
	int num[10000] = {0};
	for (i = 1; i <= n; i++) {
		if (n % i == 0) {
			num[j] = i;
			j++;
		}
	}

	if (j < k) {
		printf("0");
	}
	else {
		printf("%d", num[k-1]);
	}


	return 0;
}
