#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	char word[51];
	scanf("%s", word);

	unsigned long long c = 0;
	unsigned long long M = 1234567891;
	unsigned long long r = 1;  // cc 대신 r이라는 변수를 사용하여 31의 제곱을 점진적으로 계산

	for (int i = 0; i < n; i++) {
		c = (c + (word[i] - 96) * r) % M; // 각 문자의 값을 더하면서 모듈러 연산
		r = (r * 31) % M; // 31의 제곱을 계산할 때마다 모듈러 연산
	}

	printf("%llu\n", c);

	return 0;
}
