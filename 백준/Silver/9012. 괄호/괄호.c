#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 51

typedef struct {
	char items[MAX_SIZE];
	int top;
}Stack;

void init(Stack* stack) {
	stack->top = -1;
}

int isEmpty(Stack* stack) {
	return stack->top == -1;
}

void push(Stack* stack, char item) {
	if (stack->top < MAX_SIZE - 1) {
		stack->items[++stack->top] = item;
	}
}
char pop(Stack* stack) {
	if (!isEmpty(stack)) {
		return stack->items[stack->top--];
	}
	return '\0';
}

int isVPS(char* str) {
	Stack stack;
	init(&stack);

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == '(') {
			push(&stack, '(');
		}
		else if (str[i] == ')') {
			if (isEmpty(&stack)) {
				return 0;
			}
			else {
				pop(&stack);
			}
		}
	}
	return isEmpty(&stack);
}

int main() {
	int N;
	scanf("%d", &N);

	char str[MAX_SIZE];

	for (int i = 0; i < N; i++) {
		scanf("%s", str);
		if (isVPS(str)) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}

	return 0;
}