#include <stdio.h>
int is_so(int a) {

	int count = 0;

	if (a == 1) {
		return 0;
	}
	else {
		for (int i = 2; i < a; i++) {
			if (a % i == 0) {
				count++;
			}
		}
	}
	
	if (count == 0) {
		return 1;
	}
	else {
		return 0;
	}

}

int main() {

	int n;
	scanf("%d", &n);

	int cnt = 0;

	for (int i = 0; i < n; i++) {
		int a;
		scanf("%d", &a);
		cnt = is_so(a) + cnt;
	}

	printf("%d", cnt);

	return 0;
}
