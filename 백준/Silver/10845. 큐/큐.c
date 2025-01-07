#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include<stdlib.h>

#define QUEUE_SIZE 100000

int queue[QUEUE_SIZE];
int front = 0;
int rear = 0;

int cnt = 0;

void push(int n) {
	
	queue[rear] = n;
	rear++;
}

void empty() {
	if (rear - front > 0) {
		printf("0\n");
		return;
	}
	printf("1\n");
}

void pop() {
	if (front < rear) {
		printf("%d\n", queue[front]);
		front++;
		return;
	}
	printf("-1\n");
}

void size() {
	if (rear - front > 0) {
		printf("%d\n", rear - front);
		return;
	}
	printf("0\n");

}

void front_func() {
	if (rear - front > 0) {
		printf("%d\n", queue[front]);
		return;
	}
	printf("-1\n");
}

void back_func() {
	if (rear - front > 0) {
		printf("%d\n", queue[rear-1]);
		return;
	}
	printf("-1\n");
}

int main() {
	int N;
	scanf("%d", &N);

	int num = 0;
	char com[10];

	for (int i = 0; i < N; i++) {
		scanf("%s", com);
		if (!strcmp(com, "push")) {
			scanf("%d", &num);
			push(num);
		}
		else if (!strcmp(com, "pop")) {
			pop();
		}
		else if (!strcmp(com, "size")) {
			size();
		}
		else if (!strcmp(com, "empty")) {
			empty();
		}
		else if (!strcmp(com, "front")) {
			front_func();
		}
		else if (!strcmp(com, "back")) {
			back_func();
		}
	}

	return 0;
}