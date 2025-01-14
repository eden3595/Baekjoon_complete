
long long func(int a, int b, int c) {
	if (b == 0) {
		return 1;
	}
	long long half = func(a, b / 2,c);
	
	if (b % 2 == 0) {
		return (half * half)%c;
	}
	else {
		return (a * half%c * half)%c;
	}
}

int main() {

	long long a;
	long long b;
	long long c;
	scanf("%lld %lld %lld", &a, &b, &c);

	printf("%lld", func(a, b,c));

	return 0;
}