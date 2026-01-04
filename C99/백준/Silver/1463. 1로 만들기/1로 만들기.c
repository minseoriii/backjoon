#include <stdio.h>
int d[1000001]; 
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main() {
    int x;
    scanf("%d", &x);
    for (int i = 2; i <= x; i++) {
        d[i] = d[i - 1] + 1;
        if (i % 2 == 0) {
            d[i] = MIN(d[i], d[i / 2] + 1);
        }
        if (i % 3 == 0) {
            d[i] = MIN(d[i], d[i / 3] + 1);
        }
    }

    printf("%d\n", d[x]);
    return 0;
}