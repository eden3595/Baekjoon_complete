#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int n;
	scanf("%d", &n);

	int cnt1 = 0;
	int cnt2 = 0;

	for (int i = 0; i < n; i++) {
		int k;
		scanf("%d", &k);
		cnt1 += k / 30 * 10 + 10;
		cnt2 += k / 60 * 15 + 15;
	}

	if (cnt1 > cnt2) {
		printf("M %d", cnt2);
	}
	else if (cnt1 == cnt2) {
		printf("Y M %d", cnt1);
	}
	else {
		printf("Y %d", cnt1);
	}

	return 0;
}