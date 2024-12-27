#include <stdio.h>

int main() {

	while (1) {

		int a, b;
		scanf("%d %d", &a, &b);

		if (a == 0 && b == 0) {
			break;
		}
		else {
			if (b % a != 0 && a % b != 0) {
				printf("neither\n");
			}
			else if (b % a == 0) {
				printf("factor\n");
			}
			else if (a % b == 0) {
				printf("multiple\n");
			}
		}

	}
	




	return 0;
}
