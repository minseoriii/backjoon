#include <stdio.h>

#define MOD 15746
#define SIZE 1000000

int dp[SIZE + 1];     
int cal(int n);     

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", cal(n));
    return 0;
}

int cal(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= n; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % MOD;
    }
    return dp[n];
}
