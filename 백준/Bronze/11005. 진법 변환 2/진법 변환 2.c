
int right(int b, int n) {
	if (n >= 0 && n <= 9) {
		return '0' + n; // 숫자를 문자로 변환
	}
	else if (n >= 10 && n < b) {
		return 'A' + (n - 10); // 숫자를 문자로 변환 (10 이상은 A-Z)
	}
	return -1; // 잘못된 입력
}

int main() {

	unsigned long long int a;
	int b;
	scanf("%llu %d", &a, &b);

	char num[64];

	int round = 0;
	while (a > 0) {
		int r = a % b;
		num[round++] = right(b,r);
		a /= b;
	}


	int cnt = 0;
	for (int i = 0; i<round; i++) {
		cnt++;
	}
	for (int j = cnt - 1; j >= 0; j--) {
		printf("%c", num[j]);
	}


	return 0;
}