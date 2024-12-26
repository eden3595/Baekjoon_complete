#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>




int main() {

	int n;
	int k;
	scanf("%d %d", &n, &k);

	int num[1001];

	int sum = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
		sum += num[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (num[i] > num[j]) {
				int tmp = num[i];
				num[i] = num[j];
				num[j] = tmp;
			}
		}
	}



	printf("%d", num[k-1]);

	
	return 0;
}
