#include <stdio.h>
int main() {
    int n1,n2,k1,k2;
    int sum = 0;
    scanf("%d %d %d %d", &n1,&k1,&n2,&k2);

    sum = n1 * k1 + n2 * k2;
    printf("%d",sum);
    return 0;
}