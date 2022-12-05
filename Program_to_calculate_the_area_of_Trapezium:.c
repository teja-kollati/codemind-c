#include<stdio.h>
void area(int a,int b,int h)
{
    float ar;
    ar=h*(a+b)/2.0;
    printf("%0.4f",ar);
}
int main()
{
    int a,b,h;
    scanf("%d%d%d",&a,&b,&h);
    area(a,b,h);
}