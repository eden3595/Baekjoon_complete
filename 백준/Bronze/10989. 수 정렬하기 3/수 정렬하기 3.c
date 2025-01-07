#include <stdio.h>
#include <stdlib.h>

#define MAX_VALUE 10000

int main() {
    int n;
    scanf("%d", &n);

    // 1부터 10,000까지의 숫자 등장 횟수를 저장할 배열
    int *count = (int*)calloc(MAX_VALUE + 1, sizeof(int));

    // N개의 숫자 입력받고 등장 횟수 기록
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        count[num]++;
    }

    // 등장 횟수에 따라 정렬된 결과 출력
    for (int i = 1; i <= MAX_VALUE; i++) {
        while (count[i] > 0) {
            printf("%d\n", i);
            count[i]--;
        }
    }

    // 동적 메모리 해제
    free(count);

    return 0;
}
