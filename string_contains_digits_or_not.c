#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char str[40];
        scanf("%s",str);
        int i=0,c=0;
        while(str[i]!=NULL)
        {
            if(str[i]>='0' && str[i]<='9')
            {
                c++;
            }
            i++;
        }
        if(c==0)
        {
            printf("No
");
        }
        else
        {
            printf("Yes
");
        }
        
    }
}