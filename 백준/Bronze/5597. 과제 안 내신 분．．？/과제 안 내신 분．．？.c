#include <stdio.h>
int main() {


	int student[31] = { 0 };

	for (int i = 1; i <= 28; i++) {
		int k;
		scanf("%d", &k);
		student[k] = 1;
	}

	for (int i = 1; i<= 30; i++) {
		if (student[i] == 0) {
			printf("%d\n", i);
			student[i] = 1;
		}
	}

	for (int i = 1; i <= 30; i++) {
		if (student[i] == 0) {
			printf("%d\n", i);
		}
	}

	return 0;
}
