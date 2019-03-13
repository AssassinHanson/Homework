#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a[20],n,x;//1
    long s;//1
    printf("input n:");//1
    scanf("%d",&n);//1
    for(i=0;i<=n;i++)//n+2
    {
        printf("input the %d number:",i);//n+1
        scanf("%d",&a[i]);//n+1
    }
    printf("input x:");//1
    scanf("%d",&x);//1
    s=a[n];//1
    for(i=n-1;i>=0;i--)//n+1
        s=s*x+a[i];//n
    printf("  sum is %ld",s);//1
}
//O(n)
