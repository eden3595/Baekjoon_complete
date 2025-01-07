#include <stdio.h>
int main() {

	char word[1001];
	scanf("%s\n", word);

	int n;
	scanf("%d", &n);

	printf("%c", word[n-1]);

	return 0;
}