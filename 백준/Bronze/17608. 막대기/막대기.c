#define max 100000

int main() {

	int n;
	scanf("%d", &n);

	int num[max];

	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}

	int cnt = 1;
	int last = num[n-1];

	for (int i = n - 2; i >= 0; i--) {
		if (num[i] > last) {
			cnt++;
			last = num[i];
		}
	}

	printf("%d", cnt);

	return 0;
}