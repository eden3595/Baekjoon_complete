#include <stdio.h>

int main() {
    int num[10];
    int rel[10];
    int cnt = 0;

    // 사용자로부터 10개의 숫자를 입력받음
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }

    // 배열의 값을 42로 나눈 나머지를 저장
    for (int i = 0; i < 10; i++) {
        rel[i] = num[i] % 42;
    }

    // 고유한 나머지 값의 개수를 셈
    for (int i = 0; i < 10; i++) {
        int isUnique = 1; // 기본적으로 고유하다고 가정
        for (int j = 0; j < i; j++) {
            if (rel[i] == rel[j]) {
                isUnique = 0; // 중복이 발견되면 고유하지 않음
                break;
            }
        }
        if (isUnique) {
            cnt++;
        }
    }

    printf("%d", cnt);

    return 0;
}
