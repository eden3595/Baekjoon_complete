#include <stdio.h>
int main() {

	int hour;
	int minute;

	scanf("%d %d", &hour, &minute);

	int time;
	scanf("%d", &time);

	int real = 0;

	real = (time + minute) / 60;
	int k = (time + minute) % 60;

	// 분부터 생각
	if (real >= 1) {
		// 시간 넘어가면
		if (real + hour > 23) {
			printf("%d %d", (real + hour) % 24, k);
		}
		else {
			printf("%d %d", real + hour, k);
		}
	}
	else{
		printf("%d %d", hour, time + minute);
	}
	


	return 0;
}