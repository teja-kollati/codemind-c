#include<stdio.h>
int main()
{
    int n,i,j,c=0,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                a++;
            }
        }
        if(a==9)
        {
            printf("%d ",i);
            c++;
        }
    }
    printf("
Total=%d",c);
}