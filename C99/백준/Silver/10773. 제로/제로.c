#include <stdio.h>
#define MAX 100000
int stack[MAX];
int top = -1;

void pop() {
    stack[top--];
}

void push(int x) {
    if (top + 1 < MAX) stack[++top] = x;
}
int main() {
    int k, x;
    scanf("%d", &k);
    for (int i = 0; i < k; i++) {
        scanf("%d", &x);
        if (x == 0) {
            pop();
        } else {
            push(x);
        }
    }

    long long sum = 0;
    for (int i = 0; i <= top; i++) {
        sum += stack[i];
    }
    printf("%lld", sum);
    return 0;
}