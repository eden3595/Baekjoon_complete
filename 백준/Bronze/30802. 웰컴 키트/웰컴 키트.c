#include <stdio.h>

int cnt = 0;

void cloth(int size, int t) {
	if (size == 0) {
		return;
	}
	if (size % t == 0) {
		cnt = cnt + size / t;
		return;
	}
	else {
		cnt = cnt + 1;
		cnt = cnt + size / t;
		return;
	}

}

int main() {

	int n;
	scanf("%d", &n);

	int s, m, l, xl, xxl, xxxl;
	scanf("%d %d %d %d %d %d", &s, &m, &l, &xl, &xxl, &xxxl);


	int t;
	int p;
	scanf("%d %d", &t, &p);

	cloth(s,t);
	cloth(m,t);
	cloth(l,t);
	cloth(xl,t);
	cloth(xxl,t);
	cloth(xxxl,t);
	
	printf("%d\n", cnt);


	printf("%d %d", n / p, n % p);


	return 0;
}