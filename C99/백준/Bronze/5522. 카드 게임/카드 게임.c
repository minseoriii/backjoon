#include <stdio.h>
// int a, sum; 전역변수 선언시 0으로 자동초기화되지만 
int main() {
    int sum = 0; // 지역변수는 0으로 직접 초기화 필요
    for (int i = 0; i < 5; i++) {
        int a = 0;
        scanf("%d",&a);
        sum += a;
    }
    printf("%d",sum);
    return 0;

}
