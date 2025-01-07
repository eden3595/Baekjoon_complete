#include <stdio.h>
#include <string.h>


int main() {

	char subject[100];

	char grade[5];
	float num;

	float cnt1 = 0;
	double ssum = 0;

	for (int i = 0; i < 20; i++) {
		scanf("%s %f %s", subject, &num, grade);
		if (grade[0] == 'P' || grade[0] == 'N') {
			continue;
		}
		else if (grade[0] == 'A' && grade[1] == '+') {
			cnt1 = cnt1 + num;
			ssum = ssum + 4.5 * num;
		}
		else if (grade[0] == 'A' && grade[1] == '0') {
			
			cnt1 = cnt1 + num; 
			ssum = ssum + 4.0 * num;
		}
		else if (grade[0] == 'B' && grade[1] == '+') {
			ssum = ssum + 3.5 * num;
			cnt1 = cnt1 + num;
		}
		else if (grade[0] == 'B' && grade[1] == '0') {
			ssum = ssum + 3.0 * num;
			cnt1 = cnt1 + num;
		}
		else if (grade[0] == 'C' && grade[1] == '+') {
			ssum = ssum + 2.5 * num;
			cnt1 = cnt1 + num;
		}
		else if (grade[0] == 'C' && grade[1] == '0') {
			ssum = ssum + 2.0 * num;
			cnt1 = cnt1 + num;
		}
		else if (grade[0] == 'D' && grade[1] == '+') {
			ssum = ssum + 1.5 * num;
			cnt1 = cnt1 + num;
		}
		else if (grade[0] == 'D' && grade[1] == '0') {
			ssum = ssum + 1.0 * num;
			cnt1 = cnt1 + num;
		}
		else if (grade[0] == 'F') {
			ssum = ssum + 0 * num;
			cnt1 = cnt1 + num;
		}
	}

	printf("%lf",ssum / cnt1);

	return 0;
}