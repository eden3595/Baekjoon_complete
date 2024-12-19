#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#if 01

int main() {

	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	
	int may = a * b * c;
	int cnt0 = 0;
	int cnt1 = 0;
	int cnt2 = 0;
	int cnt3 = 0;
	int cnt4 = 0;
	int cnt5 = 0;
	int cnt6 = 0;
	int cnt7 = 0;
	int cnt8 = 0;
	int cnt9 = 0;

	
	while (may != 0) {
		
		if (may % 10 == 0) {
			cnt0++;
		}
		else if (may % 10 == 1) {
			cnt1++;
		}
		else if (may % 10 == 1) {
			cnt1++;
		}
		else if (may % 10 == 2) {
			cnt2++;
		}
		else if (may % 10 == 3) {
			cnt3++;
		}
		else if (may % 10 == 4) {
			cnt4++;
		}
		else if (may % 10 == 5) {
			cnt5++;
		}
		else if (may % 10 == 6) {
			cnt6++;
		}
		else if (may % 10 == 7) {
			cnt7++;
		}
		else if (may % 10 == 8) {
			cnt8++;
		}
		else if (may % 10 == 9) {
			cnt9++;
		}

		may = may / 10;
	}
	

	printf("%d\n", cnt0);
	printf("%d\n", cnt1);
	printf("%d\n", cnt2);
	printf("%d\n", cnt3);
	printf("%d\n", cnt4);
	printf("%d\n", cnt5);
	printf("%d\n", cnt6);
	printf("%d\n", cnt7);
	printf("%d\n", cnt8);
	printf("%d\n", cnt9);
	return 0;
}


#endif