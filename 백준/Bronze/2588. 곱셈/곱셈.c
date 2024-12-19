
#include <stdio.h>

int main() {
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);

	// 각 자릿수를 추출해서 곱한 결과를 저장할 변수들
	int c, d, e;

	// b의 마지막 자릿수(5)와 a를 곱한 결과
	c = a * (b % 10);
	b = b / 10;

	// b의 두 번째 자릿수(8)와 a를 곱한 결과
	d = a * (b % 10);
	b = b / 10;

	// b의 첫 번째 자릿수(3)와 a를 곱한 결과
	e = a * b;

	// 각 결과를 출력
	printf("%d\n", c); // 2360
	printf("%d\n", d); // 3776
	printf("%d\n", e); // 1416

	// 전체 합을 출력
	printf("%d\n", c + d * 10 + e * 100); // 181720

	return 0;
}
