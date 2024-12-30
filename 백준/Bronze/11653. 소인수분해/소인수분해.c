#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



#if 01

int main() {

	unsigned int n;
	scanf("%u", &n);

	int round = 2;
	
    while (round * round <= n) { // n의 제곱근까지만 탐색
        if (n % round == 0) {
            printf("%u\n", round);
            n /= round; // n을 소인수로 나눔
        }
        else {
            round++; // 다음 숫자로 이동
        }
    }

    // 마지막 남은 n이 1보다 크면 그것도 소수
    if (n > 1) {
        printf("%u\n", n);
    }


	return 0;
}


#endif