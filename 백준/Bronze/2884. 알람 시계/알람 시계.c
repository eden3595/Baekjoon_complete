#include <stdio.h>

int main() {

	int hour;
	int minute;

	scanf("%d %d", &hour, &minute);

	if (minute >= 45) {
		minute = minute - 45;
	}
	else {
		if (hour == 0) {
			hour = 23;
			minute = minute + 15;
		}
		else {
			hour = hour - 1;
			minute = minute + 15;
		}
	}

	printf("%d %d", hour, minute);

	return 0;
}