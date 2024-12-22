#include <stdio.h>
int main() {

	int n;
	scanf("%d", &n);

	int cnt = 0;

	while (cnt < n) {
		int k;
		char word[1001];
		scanf("%d %s", &k, word);
		for (int i = 0; i < 20; i++) {
			if (word[i] == 0) {
				break;
			}
			for (int j = 0; j < k; j++) {
				printf("%c", word[i]);
			}
		}

		printf("\n");
        cnt++;
	}

	return 0;
}
