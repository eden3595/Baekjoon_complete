#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>


#if 1
#define STACK_SIZE 10000000
#define true 1
#define false 0

int stack[STACK_SIZE];
int top = -1;

void push(int n) {
	stack[++top] = n;
}


void size() {
	printf("%d\n", top + 1);
	return;
}


int empty() {
	if (top < 0) return 1;
	else return 0;
}
int pop() {
	if (empty()) return -1;
	else return stack[top--];
}
void top_func() {
	if (empty()) {
		printf("-1\n");
		return;
	}
	printf("%d\n", stack[top]);
}




int main() {

	int N;
	scanf("%d", &N);

	int num = 0;
	char com[10];

	for (int i = 0; i < N; i++) {
		scanf("%s", &com);
		if (!strcmp(com, "push")) {
			scanf("%d", &num);
			push(num);
		}
		else if (!strcmp(com, "pop")) {
			printf("%d\n", pop());
		}
		else if (!strcmp(com, "size")) {
			size();
		}
		else if (!strcmp(com, "empty")) {
			printf("%d\n", empty());
		}
		else if (!strcmp(com, "top")) {
			top_func();
		}
	}


}
#endif