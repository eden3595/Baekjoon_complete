#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int Pibbo(int n) {

	if (n == 0) {
		return 0;
	}
	if (n == 1) {
		return 1;
	}
	else {
		return Pibbo(n - 1) + Pibbo(n - 2);
	}

}

int main() {

	int n;
	scanf("%d", &n);

	printf("%d", Pibbo(n));

	return 0;
}