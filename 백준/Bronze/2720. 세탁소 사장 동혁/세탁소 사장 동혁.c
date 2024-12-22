#include <stdio.h>

int main() {

	int n;
	scanf("%d", &n);

	int m;
	int last;

	int quarter;
	int dime;
	int nickel;
	int penny;

	for (int i = 0; i < n; i++) {
		scanf("%d", &m);
		quarter = m / 25;
		m = m % 25;
		dime = m / 10;
		m = m % 10;
		nickel = m / 5;
		m = m % 5;
		penny = m;
		printf("%d %d %d %d\n", quarter, dime, nickel, penny);
	}


	return 0;
}