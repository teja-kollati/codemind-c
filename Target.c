#include<stdio.h>
int target(int p1,int p2,int p3,int p4)
{
    if(p1>=10 && p2>=10 && p3>=10 && p4>=10)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int p1,p2,p3,p4,a;
    scanf("%d%d%d%d",&p1,&p2,&p3,&p4);
    a=target(p1,p2,p3,p4);
    if(a==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}