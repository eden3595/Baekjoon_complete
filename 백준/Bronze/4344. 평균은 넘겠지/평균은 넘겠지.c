int main() {

	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int k;
		scanf(" %d", &k);
		int mid = 0;
		int num[1000];
		int cnt = 0;
		for (int j = 0; j < k; j++) {
			
			scanf("%d", &num[j]);
			mid += num[j];
		}
		for (int j = 0; j < k; j++) {
			if (num[j] > mid / k) {
				cnt++;
			}
		}
		float answer = ((float)cnt / k) * 100;
		printf("%.3f%%\n", answer);
	}
}