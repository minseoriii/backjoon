#include <stdio.h>

int main() {
    int a,n;
    scanf("%d",&a);
    for (int i = 0; i < a; i++) {
        scanf("%d",&n);
        printf("Pairs for %d: ",n);
        int count = 0;
        for (int i = 1; i <= n; i++) {
            if (i != (n-i) && i < (n-i)) {
                ++ count;
            if (count >= 2) {
                printf(", ");
            } 
            printf("%d %d",i,n-i);
            } 
        }
        printf("\n");
    }
    return 0;
}