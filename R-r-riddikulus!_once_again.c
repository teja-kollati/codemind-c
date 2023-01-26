#include<stdio.h>
int main()
{
    int n,k,i,j,temp;
    scanf("%d%d",&n,&k);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=k;i++)
    {
        temp=a[0];
        for(j=0;j<(n-1);j++)
        {
            a[j]=a[j+1];
        }
        a[j]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}