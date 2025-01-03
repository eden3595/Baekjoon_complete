
int main() {

	unsigned int n;
	scanf("%u", &n);

	int num[11];

	int round = 0;

	while (1) {
		if (n == 0) {
			break;
		}
		num[round] = n % 10;
		n = n / 10;
		round++;
	}



	for (int i = 0; i < round; i++) {
		for (int j = 0; j < round; j++) {
			if (num[i] > num[j]) {
				int tmp = num[i];
				num[i] = num[j];
				num[j] = tmp;
			}
		}
	}

	for (int i = 0; i < round; i++) {
		printf("%d", num[i]);
	}
}