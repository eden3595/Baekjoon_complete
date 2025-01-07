#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n); // 첫 번째 줄에서 숫자의 개수를 입력받습니다.

	char number[101]; // 최대 100개의 숫자와 null 문자를 저장할 배열
	scanf("%s", number); // 두 번째 줄에서 숫자들을 문자열로 입력받습니다.

	int sum = 0;

	for (int i = 0; i < n; i++) {
		sum += number[i] - '0'; // 각 숫자를 정수로 변환하여 합산합니다.
	}

	printf("%d\n", sum); // 합산한 결과를 출력합니다.

	return 0;
}
