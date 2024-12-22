#include <stdio.h>
#include <string.h>


int main() {

	char word[101];
	scanf("%s", word);

	int cnt = 0;

	for (int i = 0; i <= strlen(word); i++) {
		if (word[i] == 'c' && word[i + 1] == '=') {
			cnt--;
		}
		else if (word[i] == 'c' && word[i + 1] == '-') {
			cnt--;
		}
		else if (word[i] == 'd' && word[i + 1] == 'z' && word[i+2]=='=') {
			cnt--;
		}
		else if (word[i] == 'd' && word[i + 1] == '-') {
			cnt--;
		}
		else if (word[i] == 'l' && word[i + 1] == 'j') {
			cnt--;
		}
		else if (word[i] == 'n' && word[i + 1] == 'j') {
			cnt--;
		}
		else if (word[i] == 's' && word[i + 1] == '=') {
			cnt--;
		}
		else if (word[i] == 'z' && word[i + 1] == '=') {
			cnt--;
		}
	
	}

	printf("%d", strlen(word)+cnt);

	return 0;
}
