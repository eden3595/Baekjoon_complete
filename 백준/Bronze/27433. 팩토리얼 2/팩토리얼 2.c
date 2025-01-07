#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


long long fact(int n) {
	if (n == 0) {
		return 1;
	}
	if(0<n<=20) {
		return n * fact(n - 1);
	}
}
int main() {

	int n;
	scanf("%d", &n);
	printf("%lld", fact(n));

	return 0;
}
