#include<stdio.h>
void area(int b,int h)
{
    int a;
    a=b*h/2.0;
    printf("%d",a);
}
int main()
{
    int b,h;
    scanf("%d%d",&b,&h);
    area(b,h);
}