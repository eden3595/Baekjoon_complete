#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int num[10] = { 0 };  // 각 숫자의 빈도수를 저장할 배열

	// 각 자리수별로 숫자의 빈도수를 증가
	while (n > 0) {
		num[n % 10]++;
		n /= 10;
	}

	// 6과 9의 합을 계산하고 반올림하여 필요한 세트 개수를 결정
	int six_nine_count = (num[6] + num[9] + 1) / 2;

	// 6과 9를 제외한 숫자 중 최대 빈도수를 구함
	int max_count = 0;
	for (int i = 0; i < 10; i++) {
		if (i != 6 && i != 9) {
			if (num[i] > max_count) {
				max_count = num[i];
			}
		}
	}

	// 필요한 세트의 최소값을 출력
	if (six_nine_count > max_count) {
		printf("%d", six_nine_count);
	}
	else {
		printf("%d", max_count);
	}

	return 0;
}
