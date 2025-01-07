#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>



void hanoi(int n, char from, char tmp, char to) {


	if (n == 1) {
		printf("%c %c\n", from, to);
	}
	else {
		hanoi(n - 1, from, to, tmp);
		printf("%c %c\n", from, to);
		hanoi(n - 1, tmp, from, to);

	}

}

int main() {

	int N;
	scanf("%d", &N);
	printf("%.lf\n", pow(2, N) - 1);
	hanoi(N, '1', '2', '3');

	return 0;
}