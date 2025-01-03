
int main() {

	int n;
	scanf("%d", &n);

	int round = 0;
	int num = n;

	while (1) {
		if (num == n && round!=0) {
			break;
		}
		int first = num / 10;     // 10의 자리
		int second = num % 10;    // 1의 자리
		int sum = first + second; // 자리수의 합

		num = (second * 10) + (sum % 10); // 새로운 숫자 생성
		round++;
		
		
	}

	printf("%d", round);
}