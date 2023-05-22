#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int dig_cnt[10] = {0};
    int dig;
    while(n > 0){
        dig  = n % 10;
        dig_cnt[dig]++;
        n /= 10;
    }
    int i,c = 0;
    for (i = 0; i < 10; i ++){
        if(dig_cnt[i] > 1){
            c = 0;
            break;
        }
        else{
            c = 1;
        }
    }
    if(c == 0) printf("Not Unique Number");
    else printf("Unique Number");
}