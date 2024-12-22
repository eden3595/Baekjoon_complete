#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int right(int b, char a) {
	int dic[36];
	for (int i = 0; i < 10; i++) {
		dic[i] = i; // 0~9
	}
	for (int i = 10; i < 36; i++) {
		dic[i] = i; // A~Z
	}

	if (a >= '0' && a <= '9') {
		return dic[a - '0'];
	}
	else if (a >= 'A' && a <= 'Z') {
		return dic[a - 'A' + 10];
	}
	return -1; // 잘못된 입력
}

int power(int base, int exponent) {
	int result = 1;
	for (int i = 0; i < exponent; i++) {
		result *= base;
	}
	return result;
}


int main() {

	char num[36];
	int b;
	
	scanf("%s %d", num, &b);

	int cnt = 0;
	for (int i = 0; num[i] != '\0'; i++) {
		cnt++;
	}

	int round = 0;
	unsigned long long result = 0;

	int k = cnt-1;
	while (1) {
		if (round == cnt) {
			break;
		}
		int j = right(b, num[k]);
		result += j * power(b, round);


		round++;
		k--;
	}

	printf("%u", result);
	return 0;
}