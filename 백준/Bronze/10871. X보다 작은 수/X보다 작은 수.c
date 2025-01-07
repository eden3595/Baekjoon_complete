#include <stdio.h>

int main() {

	int n, a;
	scanf("%d %d", &n, &a);

	for (int i = 0; i < n; i++) {
		int num;
		scanf("%d", &num);
		if (num < a) {
			printf("%d ", num);
		}
	}


	return 0;
}
