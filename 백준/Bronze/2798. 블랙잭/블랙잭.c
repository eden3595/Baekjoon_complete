#include <stdio.h>
int main() {

	int n, m;
	scanf("%d %d", &n, &m);

	int num[101];

	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}

	int dist = m;
	int sum = 0;
	for (int i = 0; i < n-2; i++) {
		for (int j = i+1; j < n-1; j++) {
			for (int k = j+1; k < n; k++) {
				int c = num[i] + num[j] + num[k];
				if (c <= m && m-c < dist) {
					dist = m-c;
					sum = c;
				}
			}
		}
	} 

	printf("%d", sum);

	return 0;
}