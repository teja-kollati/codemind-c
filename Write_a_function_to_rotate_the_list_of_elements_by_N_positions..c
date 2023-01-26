#include<stdio.h>
int main()
{
    int n,i,j,temp;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        temp=a[n-1];
        for(j=(n-1);j>=1;j--)
        {
            a[j]=a[j-1];
        }
        a[j]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}