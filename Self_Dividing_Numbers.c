#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i = a; i <= b; i++){
        int temp = i;
        int len = 0; 
        int count = 0;
        while(temp > 0){
            int r = temp % 10;
            len++;
            if(r != 0){
                if(i % r == 0){
                    count++;
                }
            }
            temp /= 10;
        }
        if(len == count){
            printf("%d ",i);
        }
    }
}