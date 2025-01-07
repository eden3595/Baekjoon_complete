#include <stdio.h>
int main() {
	int A, B;

	// 입력이 있을 때까지 계속 반복
	while (scanf("%d %d", &A, &B) != EOF) {
		// 두 수의 합을 출력
		printf("%d\n", A + B);
	}

	return 0;
}