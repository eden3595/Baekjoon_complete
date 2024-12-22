#include <stdio.h>
#include <string.h>


void reverseString(char str[]) {
	int len = strlen(str);
	for (int i = 0; i < len / 2; i++) {
		char temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}
}

int main() {

	char a[4], b[4];
	scanf("%s %s", a, b);

	reverseString(a);
	reverseString(b);

	int al=0;
	int bl=0;

	for (int i = 0; a[i] != '\0'; i++) {
		al = al * 10 + (a[i] - '0');
	}
	for (int i = 0; b[i] != '\0'; i++) {
		bl = bl * 10 + (b[i] - '0');
	}

	if (al > bl) {
		printf("%d", al);
	}
	else {
		printf("%d", bl);
	}

	return 0;
}
