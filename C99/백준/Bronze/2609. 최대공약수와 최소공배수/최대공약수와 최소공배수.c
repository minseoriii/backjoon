#include <stdio.h>
int main() {
    int a, b,c,max_commonfactor,max_commonmultiple;
    scanf("%d %d", &a, &b);
    c = (a > b) ? a : b;
    for (int i = 1; i <= c; i++){
        if (a % i == 0 && b % i == 0){
            max_commonfactor = i;
        }
        max_commonmultiple = max_commonfactor * (a / max_commonfactor) * (b / max_commonfactor);
    }
    printf("%d\n%d\n", max_commonfactor, max_commonmultiple);
    
    return 0;
}