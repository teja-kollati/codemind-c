#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int n,m,a,j;
        scanf("%d%d",&n,&m);
        for(j=0;j<=m;j++)
        {
            long int temp;
            temp=(long int)j*j;
            a=0;
            if(temp%m==n)
            {
                printf("%d
",j);
                a=1;
                break;
            }
        }
        if(a!=1)
        {
            printf("-1
");
        }
    }
}