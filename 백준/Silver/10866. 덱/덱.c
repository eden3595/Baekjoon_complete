#include <stdio.h>
#include <string.h>

#define MAX_SZ 100000

typedef struct {
    int items[MAX_SZ];
    int front;
    int rear;
} Deque;

void initDeque(Deque* deque) {
    deque->front = -1;
    deque->rear = -1;
}

int isFull(Deque* deque) {
    return (deque->front == 0 && deque->rear == MAX_SZ - 1) || (deque->front == deque->rear + 1);
}

int isEmpty(Deque* deque) {
    return (deque->front == -1 && deque->rear == -1);
}

void push_front(Deque* deque, int item) {
    if (isFull(deque)) {
        return;
    }
    if (isEmpty(deque)) {
        deque->front = 0;
        deque->rear = 0;
    } else if (deque->front == 0) {
        deque->front = MAX_SZ - 1;
    } else {
        deque->front--;
    }
    deque->items[deque->front] = item;
}

void push_back(Deque* deque, int item) {
    if (isFull(deque)) {
        return;
    }
    if (isEmpty(deque)) {
        deque->front = 0;
        deque->rear = 0;
    } else if (deque->rear == MAX_SZ - 1) {
        deque->rear = 0;
    } else {
        deque->rear++;
    }
    deque->items[deque->rear] = item;
}

int pop_front(Deque* deque) {
    if (isEmpty(deque)) {
        return -1;
    }

    int deletedItem = deque->items[deque->front];

    if (deque->front == deque->rear) {
        deque->front = -1;
        deque->rear = -1;
    } else if (deque->front == MAX_SZ - 1) {
        deque->front = 0;
    } else {
        deque->front = (deque->front + 1) % MAX_SZ;
    }

    return deletedItem;
}

int pop_rear(Deque* deque) {
    if (isEmpty(deque)) {
        return -1;
    }

    int deletedItem = deque->items[deque->rear];

    if (deque->front == deque->rear) {
        deque->front = -1;
        deque->rear = -1;
    } else if (deque->rear == 0) {
        deque->rear = MAX_SZ - 1;
    } else {
        deque->rear = (deque->rear - 1 + MAX_SZ) % MAX_SZ;
    }
    return deletedItem;
}

int size(Deque* deque) {
    if (isEmpty(deque)) {
        return 0;
    } else if (deque->front <= deque->rear) {
        return deque->rear - deque->front + 1;
    } else {
        return MAX_SZ - deque->front + deque->rear + 1;
    }
}

int front(Deque* deque) {
    if (isEmpty(deque)) {
        return -1;
    }
    return deque->items[deque->front];
}

int back(Deque* deque) {
    if (isEmpty(deque)) {
        return -1;
    }
    return deque->items[deque->rear];
}

int main() {
    int N;
    scanf("%d", &N);

    char can[15];
    int n;

    Deque my;
    initDeque(&my);

    for (int i = 0; i < N; i++) {
        scanf("%s", can);
        if (!strcmp(can, "push_front")) {
            scanf("%d", &n);
            push_front(&my, n);
        } else if (!strcmp(can, "push_back")) {
            scanf("%d", &n);
            push_back(&my, n);
        } else if (!strcmp(can, "pop_front")) {
            printf("%d\n", pop_front(&my));
        } else if (!strcmp(can, "pop_back")) {
            printf("%d\n", pop_rear(&my));
        } else if (!strcmp(can, "size")) {
            printf("%d\n", size(&my));
        } else if (!strcmp(can, "empty")) {
            printf("%d\n", isEmpty(&my));
        } else if (!strcmp(can, "front")) {
            printf("%d\n", front(&my));
        } else if (!strcmp(can, "back")) {
            printf("%d\n", back(&my));
        }
    }

    return 0;
}
