#include <stdio.h>
int main() {

	int n;
	scanf("%d", &n);

	int cnt = 0;

	while (1) {

		if (cnt == n) {
			break;
		}

		else {

			int a, b;
			scanf("%d %d", &a, &b);

			printf("Case #%d: %d\n", cnt+1, a + b);
			cnt++;
		}
		
	}

	return 0;
}