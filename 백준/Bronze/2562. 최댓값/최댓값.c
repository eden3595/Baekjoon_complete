#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {

	int big = 0;

	int num[9];
	int nums;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &num[i]);
	}


	for (int i = 0; i < 9; i++) {
		if (big < num[i]) {
			big = num[i];
			nums = i;
		}
		else {
		}
	}

	printf("%d\n%d", big, nums+1);

	return 0;
}