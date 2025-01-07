#include <stdio.h>

int main() {

	char word[101];

	scanf("%s", word);

	int c = 0;

	char word2[101];

	for (int i = 0; i <strlen(word); i++) {
		word2[i] = word[strlen(word)-1-i];
	}

	for (int j = 0; j < strlen(word); j++) {
		if (word[j] != word2[j]) {
			c++;
		}
	}

	if (c != 0) {
		printf("0");
	}
	else if (c == 0) {
		printf("1");
	}

	return 0;
}