#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

	char word[101];
	scanf("%s", word);

	int alpha[30] = { 0 };

	for (int i = 0; word[i] != '\0'; i++) {
		int k = word[i];
		alpha[k - 'a']++;
	}

	for (int j = 0; j < 26; j++) {
		printf("%d ", alpha[j]);
	}
	
	return 0;
}
