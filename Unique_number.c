#include<stdio.h>
int main()
{
    char str[20];
    scanf("%s",str);
    int i,j,temp,count=0;
    for(i=0;str[i]!=NULL;i++)
    {
        temp=str[i];
        for(j=(i+1);str[j]!=NULL;j++)
        {
            if(str[j]==temp)
            {
                count++;
            }
        }
    }
    if(count==0)
    {
        printf("Unique Number");
    }
    else
    {
        printf("Not Unique Number");
    }
}