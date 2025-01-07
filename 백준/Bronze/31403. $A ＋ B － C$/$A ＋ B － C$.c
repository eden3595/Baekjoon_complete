#include <stdio.h>

// 자릿수 계산 함수
int get_digit_count(int num) {
    if (num == 0) return 1; // 0일 경우는 한 자리수로 처리
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

int main() {
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    int n = get_digit_count(b); // b의 자릿수 계산

    printf("%d\n", a + b - c);
    printf("%d\n", a * (int)pow(10, n) + b - c);

    return 0;
}
