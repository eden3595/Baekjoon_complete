
#include <stdio.h>

int count_trailing_zeros(int n) {
    int count = 0;
    while (n >= 5) {
        count += n / 5; // 5의 배수의 개수를 더함
        n /= 5;         // 5의 거듭 제곱으로 나눔
    }
    return count;
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%d\n", count_trailing_zeros(n));
    return 0;
}
