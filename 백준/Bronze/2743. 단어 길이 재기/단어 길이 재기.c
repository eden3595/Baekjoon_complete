#include <stdio.h>
#include <string.h>
int main() {

	char word[100];

	scanf("%s", word);

	int length = strlen(word);

	printf("%d", length);

	return 0;
}