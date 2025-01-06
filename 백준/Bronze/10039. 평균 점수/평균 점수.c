
int main() {

	int num[6];
	int cnt = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &num[i]);
	}
	for (int i = 0; i < 5; i++) {
		if (num[i] < 40) {
			num[i] = 40;
		}
	}
	for (int i = 0; i < 5; i++) {
		cnt += num[i];
	}

	printf("%d", cnt / 5);

	return 0;
}
