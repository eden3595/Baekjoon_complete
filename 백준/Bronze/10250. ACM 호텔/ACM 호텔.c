#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int find(int h, int w,int rank) {

	int small = 0;
	int big = 0;

	for (int i = 1; i < rank; i++) {
		if (i%h==0) {
			small = 0;
			big++;
		}
		else {
			small++;
		}
	}

	return (small +1)* 100 + big+1;

}

int main() {

	int N;
	scanf("%d", &N);

	int h;
	int w;
	int rank;

	for (int i = 0; i < N; i++) {
		scanf("%d %d %d", &h, &w, &rank);
		printf("%d\n",find(h,w,rank));
	}

	return 0;
}