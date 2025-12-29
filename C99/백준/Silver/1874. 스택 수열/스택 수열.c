#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int top;
    int *data;
    int capacity;
} Stack;

void initstack(Stack *s, int capacity) {
    s->top = -1;
    s->capacity = capacity;
    s->data = (int*)malloc(sizeof(int) * capacity);
}

void freestack(Stack *s) {
    free(s->data);
    s->data = NULL;
    s->capacity = 0;
    s->top = -1;
}

int push(Stack *s, int value) {
    s->data[++(s->top)] = value;
    return 0;
}

int pop(Stack *s, int *out) {
    *out = s->data[(s->top)--];
    return 0;
}

int main(void) {
    int n;
    scanf("%d", &n);

    Stack s;
    initstack(&s, n);

    char *ops = (char*)malloc(sizeof(char) * (2*n));
    int ops_len = 0;

    int next = 1;
    int ok = 1;

    for (int i = 0; i < n; i++) {
        int value;
        scanf("%d", &value);

        while (next <= value) {
            if (push(&s, next) != 0) { ok = 0; break; }
            ops[ops_len++] = '+';
            next++;
        }
        if (!ok) break;

        if (s.top >= 0 && s.data[s.top] == value) {
            int out;
            pop(&s, &out);
            ops[ops_len++] = '-';
        } else {
            ok = 0;
            break;
        }
    }

    if (!ok) {
        printf("NO\n");
    } else {
        for (int i = 0; i < ops_len; i++) {
            printf("%c\n", ops[i]);
        }
    }

    free(ops);
    freestack(&s);
    return 0;
}
