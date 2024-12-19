#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N == 1) {
        printf("1\n");
        return 0;
    }

    int layer = 1;
    int end = 1;
    
    while (end < N) {
        end += 6 * layer;
        layer++;
    }

    printf("%d\n", layer);
    return 0;
}
