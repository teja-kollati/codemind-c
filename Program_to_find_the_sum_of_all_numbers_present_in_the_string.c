#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]",str);
    int i,sum=0;
    while(str[i]!=NULL)
    {
        if(str[i]>='1' && str[i]<='9')
        {
            sum=sum+(str[i]-'0');
        }
        i++;
    }
    printf("%d",sum);
}