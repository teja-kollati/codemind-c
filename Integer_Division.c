#include<stdio.h>
int main(){
    long long int n, a;
    scanf("%lld",&n);
    a = n / 10;
    if(n%10 == 0){
        printf("%lld",n/10);
    }
    else{
        if(a > 0){
            printf("%lld",a);
        }
        else{
            printf("%lld",a - 1);
        }
    }
}