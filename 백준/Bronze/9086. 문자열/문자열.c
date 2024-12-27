#include <stdio.h>
#include <string.h>
int main() {

	int n;
	scanf("%d", &n);

	char word[1000];

	for (int i = 0; i < n; i++) {
		scanf("%s", word);
		if (strlen(word) == 1) {
			printf("%c%c\n", word[0], word[0]);
		}
		else {
			printf("%c%c\n", word[0], word[strlen(word) - 1]);
		}
	}

	return 0;
}
