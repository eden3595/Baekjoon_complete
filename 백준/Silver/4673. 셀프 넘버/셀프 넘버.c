#include <stdio.h>

int d(int n) {
    int sum = n;
    while (n > 0) {
        sum += n % 10;  // n의 각 자리수를 더함
        n /= 10;
    }
    return sum;
}

int main() {
    int num[10001] = {0};  // 1부터 10000까지 체크할 배열, 0이면 생성자가 없음

    // 1부터 10000까지 확인
    for (int i = 1; i <= 10000; i++) {
        int value = d(i);
        if (value <= 10000) {
            num[value] = 1;  // 생성자 있음
        }
    }

    // 셀프 넘버 출력
    for (int i = 1; i <= 10000; i++) {
        if (num[i] == 0) {
            printf("%d\n", i);  // 생성자가 없는 숫자 출력
        }
    }

    return 0;
}
