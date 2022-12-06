#include<stdio.h>
void Time(int n)
{
    int h,m;
    h=n/60;
    m=n-h*60;
    printf("%d Hour(s) %d Minute(s)",h,m);
}
int main()
{
    int n;
    scanf("%d",&n);
    Time(n);
}