#include <stdio.h>

#define MAX 1000000

int main() {
    int n, x;
    scanf("%d", &n);
    
    int arr[n];
    int hashmap[MAX + 1] = {0}; // 숫자 범위가 1부터 1000000까지이므로, 배열 크기를 MAX + 1로 설정

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        hashmap[arr[i]] = 1; // 해당 숫자가 있음을 표시
    }

    scanf("%d", &x);
    
    int count = 0;
    for (int i = 0; i < n; i++) {
        int complement = x - arr[i];
        if (complement > 0 && complement <= MAX && hashmap[complement]) {
            count++;
        }
    }

    // 각 쌍을 두 번씩 세기 때문에 결과를 절반으로 나눔
    printf("%d\n", count / 2);

    return 0;
}
