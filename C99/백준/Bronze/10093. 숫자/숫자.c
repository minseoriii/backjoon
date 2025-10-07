#include <stdio.h>

int main() {
    int a,b,count = 0;
    scanf("%d %d",&a, &b);
    
    if (a > b) {
        int temp;
        temp = a;
        a = b;
        b = temp;
        count = b-a-1;
    } if (a<b) {
        count = b-a-1;
    } 
    printf("%d\n",count);
    for (int i = a+1; i < b; i++) {
        printf("%d ",i);
    }
    return 0;
}