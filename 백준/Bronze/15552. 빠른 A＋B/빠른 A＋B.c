#include <stdio.h>

int main(void) {
	
	int A, B, t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%d%d", &A, &B);
		printf("%d\n", A + B);
	}
	return 0;
	
}