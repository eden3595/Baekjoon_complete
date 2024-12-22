#include <stdio.h>

int main() {
    int num[8];

    for (int i = 0; i < 8; i++) {
        scanf("%d", &num[i]);
    }

    int isAscending = 1;  // 오름차순인지 확인하는 플래그
    int isDescending = 1; // 내림차순인지 확인하는 플래그

    for (int i = 0; i < 8; i++) {
        if (num[i] != i + 1) {  // 각 요소가 오름차순인지 확인
            isAscending = 0;
        }
        if (num[i] != 8 - i) {  // 각 요소가 내림차순인지 확인
            isDescending = 0;
        }
    }

    if (isAscending) {
        printf("ascending\n");
    } else if (isDescending) {
        printf("descending\n");
    } else {
        printf("mixed\n");
    }

    return 0;
}
