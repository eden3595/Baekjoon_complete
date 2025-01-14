#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 소수를 저장할 배열
int is_prime[1000001] = { 0 };

// 에라토스테네스의 체를 이용해 소수 판별
void sieve_of_eratosthenes(int limit) {
	for (int i = 2; i <= limit; i++) {
		is_prime[i] = 1;
	}
	for (int i = 2; i <= sqrt(limit); i++) {
		if (is_prime[i]) {
			for (int j = i * i; j <= limit; j += i) {
				is_prime[j] = 0;
			}
		}
	}
}

int main() {
	int n;
	scanf("%d", &n);

	sieve_of_eratosthenes(1000000); // 소수를 미리 계산

	for (int i = 0; i < n; i++) {
		int a;
		scanf("%d", &a);
		int wow = 0, mom = 0;

		for (int j = 2; j <= a / 2; j++) {
			if (is_prime[j] && is_prime[a - j]) {
				if (wow == 0 || abs(wow - mom) > abs(2 * j - a)) {
					wow = j;
					mom = a - j;
				}
			}
		}

		printf("%d %d\n", wow, mom);
	}

	return 0;
}
