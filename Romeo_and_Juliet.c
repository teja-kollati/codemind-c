#include<stdio.h>
void romeo(int x,int y,int z)
{
    int c;
    c=(x*5+y*10)/z;
    printf("%d",c);
}
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    romeo(x,y,z);
}