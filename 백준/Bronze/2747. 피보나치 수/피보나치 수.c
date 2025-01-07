#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define MAX 50  // 적절한 크기로 설정, n의 최대값을 고려

int memo[MAX] = { 0 };

int fibo(int n) {
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }

    if (memo[n] != 0) {
        return memo[n];
    }

    memo[n] = fibo(n - 1) + fibo(n - 2);
    return memo[n];
}


int main() {

	int n;
	scanf("%d", &n);

	printf("%d", fibo(n));

	return 0;
}