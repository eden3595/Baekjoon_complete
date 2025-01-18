int main() {

	int n;
	scanf("%d", &n);

	int cnt = -1;

	for (int i = 0; i <= n / 5; i++) {
		int remain = n - (i * 5);
		if (remain % 3 == 0) {
			int total = i + remain / 3;
			if (cnt == -1 || total < cnt) {
				cnt = total;
			}
		}
	}

	printf("%d", cnt);
	
	return 0;
}
