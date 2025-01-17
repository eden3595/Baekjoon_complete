int what(int n) {
	int digits[4];
	int i = 0;
	if (n == 1000) {
		return 0;
	}
	// 각 자리를 배열에 저장
	while (n > 0) {
		digits[i] = n % 10;
		n /= 10;
		i++;
	}

	// 한자리 수는 자동으로 한수
	if (i == 1) return 1;

	// 두자리 수는 항상 한수
	if (i == 2) return 1;

	// 세자리 수 이상의 경우
	if (i == 3) {
		if (digits[0] - digits[1] == digits[1] - digits[2]) {
			return 1;
		}
	}

	return 0;
}
int main() {

	int num[1001] = { 0 };

	int n;
	scanf("%d", &n);


	int cnt = 0;

	for (int i = 1; i <= n; i++) {
		if (what(i) == 1) {
			num[i] = 1;
		}
	}

	for (int i = 1; i <= n; i++) {
		if (num[i] == 1) {
			cnt++;
		}
	}

	printf("%d", cnt);

	return 0;
}