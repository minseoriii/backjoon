#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
    int m,n;
    scanf("%d %d", &m,&n);
    bool* is_prime = (bool*)malloc((n+1)*sizeof(bool));
    for(int i=0;i<=n;i++) is_prime[i]=true;
    is_prime[0]=is_prime[1]=false;
    for(int i=2;i*i<=n;i++)
    {
        if(is_prime[i])
        {
            for(int j=i*i;j<=n;j+=i)
                is_prime[j]=false;
        }
    }
    for(int i=m;i<=n;i++)
    {
        if(is_prime[i])
            printf("%d\n",i);
    }
    free(is_prime);
    return 0;
}

