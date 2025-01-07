#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define PI 3.141592653589793

int main() {
    long double r;
    scanf("%Lf", &r);

    // 유클리드 기하학에서 원의 넓이
    printf("%.6Lf\n", PI * r * r);

    // 택시 기하학에서 원의 넓이
    printf("%.6Lf\n", 2 * r * r);

    return 0;
}
