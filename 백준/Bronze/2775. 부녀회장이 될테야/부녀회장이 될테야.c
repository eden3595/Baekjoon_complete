#include <stdio.h>

int residents(int k, int n) {
    // 0층의 i호에는 i명이 산다
    if (k == 0) {
        return n;
    }
    
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += residents(k - 1, i);
    }
    
    return sum;
}

int main() {
    int T;
    scanf("%d", &T); // Test case의 수

    for (int i = 0; i < T; i++) {
        int k, n;
        scanf("%d %d", &k, &n);
        int result = residents(k, n);
        printf("%d\n", result);
    }

    return 0;
}
