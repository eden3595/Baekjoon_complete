#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);

	for (int i = 1; i < 1000000; i++) {
		int sum = i;
		int temp = i;

		// 각 자리 수의 합을 계산
		while (temp > 0) {
			sum += temp % 10;
			temp /= 10;
		}

		// 합이 N과 같은지 확인
		if (sum == N) {
			printf("%d", i);
			return 0;
		}
	}

	printf("0");
	return 0;
}