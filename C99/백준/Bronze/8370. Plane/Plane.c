#include <stdio.h>
// row열 column 아래로 열리는 알파벳 & 신문 칼럼은 세로로 길죠?
int main() {
    int n1,n2,k1,k2;
    int sum = 0;
    scanf("%d %d %d %d", &n1,&k1,&n2,&k2);

    sum = n1 * k1 + n2 * k2;
    printf("%d",sum);
    return 0;
}
