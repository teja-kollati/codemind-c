#include<stdio.h>
#include<math.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,a;
        scanf("%d",&n);
        a=sqrt(n);
        if(a*a==n)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}