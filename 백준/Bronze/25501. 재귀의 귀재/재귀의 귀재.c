
#include <stdio.h>
#include <string.h>

int cnt = 1;

int recursion(const char* s, int l, int r) {
	if (l >= r) return 1;
	else if (s[l] != s[r]) return 0;
	else {
		cnt++;
		return recursion(s, l + 1, r - 1);
	}
}

int isPalindrome(const char* s) {
	return recursion(s, 0, strlen(s) - 1);
}

int main() {


	int n;
	scanf("%d", &n);

	char word[1001];

	for (int i = 0; i < n; i++) {
		scanf("%s", word);
		int p = isPalindrome(word);
		printf("%d %d\n", p, cnt);
		cnt = 1;
	}

	return 0;
}