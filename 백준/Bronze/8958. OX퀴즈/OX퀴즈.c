#include <stdio.h>
#include <string.h>
int conduct(const char* a) {

	int score = 0;
	int current_streak = 0;

	for (int i = 0; a[i] != '\0'; i++) {
		if (a[i] == 'O') {
			current_streak++;
			score += current_streak;
		}
		else {
			current_streak = 0;
		}
	}

	return score;
}

int main() {

	int n;
	scanf("%d", &n);

	int round = 0;
	int score = 0;
	char a[81];

	while (round != n) {
		scanf("%s", a);
		
		int total = conduct(a);
		printf("%d\n", total);
		round++;
	}


	return 0;
}
