#include<stdio.h>
int main()
{
    int n,i,d,sum1=0,sum2=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum1=sum1+i*i;
    }
    for(i=1;i<=n;i++)
    {
        sum2=sum2+i;
    }
    d=sum2*sum2-sum1;
    printf("%d",d);
}