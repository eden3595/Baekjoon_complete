#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// A simple rounding function to avoid using math.h
int round_nearest(long double value) {
    return (int)(value + (value >= 0 ? 0.5 : -0.5));
}

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    scanf("%d", &n);

    int num[500000] = { 0 }; // Adjust size for the maximum input
    long double sum = 0;
    int max = -4001; // Smallest possible value - 1
    int min = 4001;  // Largest possible value + 1

    int ind[8001] = { 0 };
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
        sum += num[i];
        if (num[i] > max) max = num[i];
        if (num[i] < min) min = num[i];
        ind[num[i] + 4000]++;
    }

    qsort(num, n, sizeof(int), compare);

    int best = 0;
    for (int i = 0; i < 8001; i++) {
        if (ind[i] > best) {
            best = ind[i];
        }
    }

    int modes[8001], mode_count = 0;
    for (int i = 0; i < 8001; i++) {
        if (ind[i] == best) {
            modes[mode_count++] = i - 4000;
        }
    }
    qsort(modes, mode_count, sizeof(int), compare);
    int mode_result = mode_count > 1 ? modes[1] : modes[0];

    int average = round_nearest(sum / n);

    printf("%d\n", average);
    printf("%d\n", num[n / 2]);
    printf("%d\n", mode_result);
    printf("%d\n", max - min);

    return 0;
}
