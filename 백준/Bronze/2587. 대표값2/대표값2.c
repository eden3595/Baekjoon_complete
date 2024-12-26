#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>




int main() {



	int num[1001];

	int sum = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &num[i]);
		sum += num[i];
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (num[i] < num[j]) {
				int tmp = num[i];
				num[i] = num[j];
				num[j] = tmp;
			}
		}
	}


	printf("%d\n", sum / 5);

	printf("%d", num[2]);

	
	return 0;
}
