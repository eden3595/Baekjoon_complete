#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#if 01
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int num[9];

    // 9명의 난쟁이 키 입력 받기
    for (int i = 0; i < 9; i++) {
        scanf("%d", &num[i]);
    }

    int res[7]; // 일곱 난쟁이들의 키를 저장할 배열
    int round = 0;

    // 두 명을 제외한 7명 선택
    while (round < 36) { // 최대 36번 시도
        int cnt = 0;
        int idx = 0;
        
        // round가 가리키는 두 명을 제외한 나머지 7명 찾기
        for (int i = 0; i < 9; i++) {
            for (int j = i + 1; j < 9; j++) {
                // i, j 두 명을 제외한 7명의 합 계산
                int sum = 0;
                idx = 0;
                for (int k = 0; k < 9; k++) {
                    if (k != i && k != j) {
                        res[idx++] = num[k];
                        sum += num[k];
                    }
                }

                if (sum == 100) {
                    // 7명의 합이 100이라면 오름차순 정렬 후 출력
                    qsort(res, 7, sizeof(int), compare);
                    for (int k = 0; k < 7; k++) {
                        printf("%d\n", res[k]);
                    }
                    return 0; // 찾았으면 종료
                }
            }
        }
        round++;
    }

    return 0;
}
#endif
