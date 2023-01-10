#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int m,j;
    scanf("%d",&m);
    int b[m];
    for(j=0;j<m;j++)
    {
        scanf("%d",&b[j]);
    }
    int q;
    scanf("%d",&q);
    for(i=0,j=0;i<n,j<m;i++,j++)
    {
        if(a[i]<=q && b[j]>=q)
        {
            c++;
        }
    }
    printf("%d",c);
}