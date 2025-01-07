#include <stdio.h>
#include <string.h>
int main() {

	char word[101];

	while (fgets(word, 101, stdin) != NULL) {
		printf("%s", word);
	}

	return 0;
}