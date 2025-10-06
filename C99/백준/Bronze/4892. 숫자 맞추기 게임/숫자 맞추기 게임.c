#include <stdio.h>
int main() {
    int n,n1,n2,n3,n4,count = 0;
    while (1) {
        scanf("%d\n",&n);
        if (n == 0) {
            break;
        }
        count = count + 1;
        printf("%d. ",count);
        n1 = 3*n;
        if (n1 % 2 == 0) {
            printf("even ");
            n2 = n1/2;
        } else {
            printf("odd ");
            n2 = (n1 + 1) / 2;
        }
        n3 = 3*n2;
        n4 = n3 / 9;
        printf("%d\n",n4);
    }
    return 0;
}
