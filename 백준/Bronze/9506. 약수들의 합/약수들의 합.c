#include <stdio.h>
int main() {

	while (1) {
		
		int a;
		scanf("%d", &a);

		if (a == -1) {
			break;
		}

		int sum = 0;
		int num[10000] = { 0 };
		int index = 0;

		for (int i = 1; i < a; i++) {
			if (a % i == 0) {
				sum=sum + i;
				num[index] = i;
				index++;
			}
		}

		if (sum != a) {
			printf("%d is NOT perfect.\n", a);
		}
		
		else {
			int alt = 0;
			int bet = 0;
			for (int i = 1; i < a; i++) {
				if (num[i] == 1) {
					alt++;
				}
			}
			printf("%d = ", a);
			for (int i = 0; i < index; i++) {
				if (i != index -1) {
					printf("%d + ", num[i]);  // num[i]를 출력
				}
				else {
					printf("%d\n", num[i]);  // 마지막에는 '+' 없이 출력
				}
			}
		}

	}


	return 0;
}
