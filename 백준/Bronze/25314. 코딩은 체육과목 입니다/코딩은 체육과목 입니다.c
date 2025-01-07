#include <stdio.h>
int main() {

	int n;
	scanf("%d", &n);

	int k = n / 4;

	for (int i = 0; i < k; i++) {
		printf("long ");
	}
	printf("int");

	return 0;
}