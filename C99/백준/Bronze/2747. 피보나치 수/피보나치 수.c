
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    if (n <= 1) { printf("%d\n", n); return 0; }
    long long a = 0, b = 1, c;
    for (int i = 2; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    printf("%lld\n", b);
    return 0;
}