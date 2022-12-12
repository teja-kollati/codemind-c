#include<stdio.h>
int main()
{
    int n,a,r,sum=0;
    scanf("%d",&n);
    a=n;
    while(a!=0)
    {
        r=a%10;
        a=a/10;
        sum=sum*10+r;
    }if(sum==n){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");    }
}