#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int num[7];
	int min = 999;
	int cnt = 0;
	for (int i = 0; i < 7; i++) {
		scanf("%d", &num[i]);
		if (num[i] % 2 != 0) {
			cnt += num[i];
			if (num[i] < min) {
				min = num[i];
			}
		}
	}
	if (cnt == 0) {
		printf("-1");
	}
	else printf("%d\n%d", cnt, min);

	return 0;
}