#include<stdio.h>
void Time(int n)
{
    int h,m,s;
    h=n/3600;
    m=(n-h*3600)/60;
    s=n-(h*3600)-(m*60);
    printf("H:M:S-%d:%d:%d",h,m,s);
}
int main()
{
    int n;
    scanf("%d",&n);
    Time(n);
}