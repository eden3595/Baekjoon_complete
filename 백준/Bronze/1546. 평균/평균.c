#include <stdio.h>
int main() {

	float k;
	scanf("%f", &k);

	float score[1001] = { 0 };

	for (int i = 1; i <= k; i++) {
		scanf("%f", &score[i]);
	}


	float max = -999;

	for (int i = 1; i <= k; i++) {
		if (score[i] > max) {
			max = score[i];
		}
	}

	for (int i = 1; i <= k; i++) {
		score[i] = score[i] / max * 100;
	}

	float sum = 0;
	for (int i = 1; i <= k; i++) {
		sum = sum + score[i];
	}

	printf("%f", sum / k);
	return 0;
}