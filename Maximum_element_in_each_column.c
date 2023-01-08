#include<stdio.h>
int main()
{
    int n,m,i,j,max;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<m;j++)
    {
        max=0;
        for(i=0;i<n;i++)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];
            }
        }
        printf("%d
",max);
    }
}