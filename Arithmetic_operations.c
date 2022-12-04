#include<stdio.h>
void math(int a,int b)
{
    int add,sub,mlt,div,rm;
    add=a+b;
    sub=a-b;
    mlt=a*b;
    div=a/b;
    rm=a%b;
    printf("Sum:%d
Difference:%d
Product:%d
Quotient:%d
Remainder:%d
",add,sub,mlt,div,rm);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    math(a,b);
}