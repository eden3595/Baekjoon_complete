#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int check(char w[]) {
    if (w[1] == '\0') { // 문자열의 두 번째 문자가 '\0'이면 길이가 1
        return 0;
    }

    int alpha[26] = { 0 }; // 알파벳 소문자만 필요
    int prev = w[0];
    alpha[prev - 'a'] = 1; // 첫 문자의 존재를 기록

    for (int i = 1; w[i] != '\0'; i++) {
        if (prev != w[i]) { // 이전 문자와 다른 경우
            if (alpha[w[i] - 'a'] != 0) { // 이미 등장한 문자라면
                return 1;
            }
            alpha[w[i] - 'a']++; // 새로운 문자 등장 기록
        }
        prev = w[i]; // 이전 문자를 업데이트
    }

    return 0;
}


int main() {

	int n;
	scanf("%d", &n);

	char word[101];
	int cnt = 0;

	for (int i = 0; i < n; i++) {
		scanf("%s", word);
		if (check(word) == 0) {
			cnt++;
		}
	}
	printf("%d", cnt);

	return 0;
}