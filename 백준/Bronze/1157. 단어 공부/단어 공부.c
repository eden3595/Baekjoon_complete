#include <stdio.h>
#include <string.h>

int main() {
    int alpha[26] = { 0 };  // 알파벳 개수에 맞게 배열 크기를 조정

    char word[1000000];
    scanf("%s", word);

    int length = strlen(word);  // 문자열 길이를 미리 계산

    // 문자열 길이만큼 루프
    for (int i = 0; i < length; i++) {
        int k = word[i];
        if ('A' <= k && k <= 'Z') {
            alpha[k - 'A']++;
        } else if ('a' <= k && k <= 'z') {
            alpha[k - 'a']++;
        }
    }

    int max = 0;
    char result = '?';
    int duplicate = 0;

    for (int i = 0; i < 26; i++) {
        if (alpha[i] > max) {
            max = alpha[i];
            result = i + 'A';
            duplicate = 0;  // 중복 상태 초기화
        } else if (alpha[i] == max) {
            duplicate = 1;  // 중복 발생
        }
    }

    if (duplicate) {
        printf("?\n");
    } else {
        printf("%c\n", result);
    }

    return 0;
}
