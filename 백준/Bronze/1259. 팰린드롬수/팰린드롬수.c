#include <stdio.h>
#include <string.h>

int main() {

	while (1) {

		char word[100000];
		scanf("%s", word);

		if (strcmp(word, "0") == 0) {
			break;
		}

		int c = 0;

		char word2[100000];
		for (int i = 0; i < strlen(word); i++) {
			word2[i] = word[strlen(word) - i - 1];
		}
		word2[strlen(word)] = '\0';
		
		if (strcmp(word, word2) == 0) {
			printf("yes\n");
		}
		else {
			printf("no\n");
		}
	}


	return 0;
}
