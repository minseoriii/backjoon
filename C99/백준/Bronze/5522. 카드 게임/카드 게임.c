#include <stdio.h>

int main() {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        int a = 0;
        scanf("%d",&a);
        sum += a;
    }
    printf("%d",sum);
    return 0;
}