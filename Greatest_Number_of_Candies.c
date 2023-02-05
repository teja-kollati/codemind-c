#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int m,max=0;
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(max<=a[i])
        {
            max=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if((a[i]+m)>=max)
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
}