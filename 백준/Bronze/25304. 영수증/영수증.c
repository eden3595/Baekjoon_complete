#include <stdio.h>
int main() {

	int money;
	int num;
	scanf("%d", &money);
	scanf("%d", &num);

	int cnt = 0;

	int m, n;
	for (int i = 0; i < num; i++) {
		scanf("%d %d", &m, &n);
		cnt += m * n;
	}

	if (cnt == money) {
		printf("Yes");
	}
	else {
		printf("No");
	}

	return 0;
}