#include <stdio.h>

int main() {
    unsigned int a, b, max;
    scanf("%u %u %u", &a, &b, &max);

    int cnt;

    if (a >= max) {
        cnt = 1;  // 한 번의 낮으로 목표에 도달하는 경우
    } else {
        // 필요한 일 수 계산
        cnt = (max - b - 1) / (a - b) + 1;
    }

    printf("%d\n", cnt);
    return 0;
}
