#include <stdio.h>
int main() {

	int n;
	scanf("%d", &n);

	int points = (1 << n) + 1;
	printf("%d", points * points);


	return 0;
}