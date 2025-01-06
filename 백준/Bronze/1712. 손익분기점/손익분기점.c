
int main() {

	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	
	if (b >= c) {
		printf("-1\n");
	}
	else {
		int cnt = (a / (c - b)) + 1;
		printf("%d\n", cnt);
	}


	return 0;
}