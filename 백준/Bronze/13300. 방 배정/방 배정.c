
int main() {

	int n;
	int room;
	scanf("%d %d", &n, &room);

	int num[2][7] = { 0 };

	for (int i = 0; i < n; i++) {
		int s, y;
		scanf("%d %d", &s, &y);
		num[s][y]++;
	}

	int cnt = 0;

	for (int i = 1; i < 7; i++) {
		if (num[0][i] > room) {
			if (num[0][i] % room == 0) {
				cnt += num[0][i] / room;
			}
			else {
				cnt += num[0][i] / room + 1;
			}
		}
		else if (num[0][i] > 0 && num[0][i]<=room) {
			cnt++;
		}
	}

	for (int i = 1; i < 7; i++) {
		if (num[1][i] > room) {
			if (num[1][i] % room == 0) {
				cnt += num[1][i] / room;
			}
			else {
				cnt += num[1][i] / room + 1;
			}
		}
		else if (num[1][i] > 0 && num[1][i] <= room) {
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}
