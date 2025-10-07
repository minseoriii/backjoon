#include <stdio.h>

int main() {
    int t,x,y;
    int sum = 0;
    scanf("%d",&t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d",&x,&y);
        sum = x + y;
        printf("%d\n", sum);
    }
    return 0;
}