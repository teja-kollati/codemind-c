#include<stdio.h>
void cap(int s,int t,int b)
{
    int c;
    c=(2*t*s*b*512)/1024;
    printf("%dkb",c);
}
int main()
{
    int s,t,b;
    scanf("%d%d%d",&s,&t,&b);
    cap(s,t,b);
}