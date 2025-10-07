#include <stdio.h>

int main() {
    int t,odd;
    scanf("%d",&t);
    for (int i = 0; i < t; i++ ){
        int sum = 0;
        scanf("%d",&odd);
        for (int i = 1; i <= odd; i += 2){
            sum += i;
        }
        printf("%d\n",sum); 
    }
    return 0;
}