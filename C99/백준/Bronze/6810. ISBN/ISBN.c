#include <stdio.h>

int main() {
    int sum = 91;
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    sum = sum + (a + b*3 + c);
    printf("The 1-3-sum is %d", sum);
    return 0;
}