#include <stdio.h>
int main() {

	int n;
	scanf("%d", &n);

	int cnt = 0;

	int num[100] = { 0 };

	for (int i = 0; i < n; i++){
		scanf("%d", &num[i]);
	}

	int k;
	scanf("%d", &k);

	for (int i = 0; i < n; i++) {
		if (num[i] == k) {
			cnt++;
		}
	}

	printf("%d", cnt);
	return 0;
}