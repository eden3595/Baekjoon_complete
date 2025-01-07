#include <stdio.h>
#include <stdlib.h>

int main() {

	char word1[9];
	char word2[9];
	char word3[9];

	scanf("%s", word1);
	scanf("%s", word2);
	scanf("%s", word3);

	char* k = 0;
	int n=0;
	if (word1[0] != 'F' && word1[0] != 'B') {
		k = word1;
		n = 1;
	}
	else if (word2[0] != 'F' && word2[0] != 'B') {
		k = word2;
		n = 2;
	}
	else if (word3[0] != 'F' && word3[0] != 'B') {
		k = word3;
		n = 3;
	}

	int num;
	num = atoi(k);

	if (n == 1) {
		num += 3;
	}
	else if (n == 2) {
		num += 2;
	}
	else if (n == 3) {
		num += 1;
	}

	if (num % 3 == 0 && num % 5 == 0) {
		printf("FizzBuzz");
	}
	else if (num % 3 == 0 && num % 5 != 0) {
		printf("Fizz");
	}
	else if (num % 3 != 0 && num % 5 == 0) {
		printf("Buzz");
	}
	else if (num % 3 != 0 && num % 5 != 0) {
		printf("%d",num);
	}


	return 0;
}