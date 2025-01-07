#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>




int main() {

	int n;
	scanf("%d", &n);

	int cnt = 0;
	int last = 0;
	int num[100000] = { 0 };

	for (int i = 0; i < n; i++) {
		int k;
		scanf("%d", &k);
		if (k == 0) {
			if (last > 0) {
				last--;  // Only decrement if last is greater than 0
			}

		}
		else {
			num[last] = k;
			last++;
		}
	}

	for (int i = 0; i<last; i++) {
		cnt += num[i];
	}

	printf("%d", cnt);

	return 0;
}