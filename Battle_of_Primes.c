#include<stdio.h>
bool isprime(int n){
    for(int i = 2; i <= n/2 + 1; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i = 1; i <= 100; i++){
        if(isprime(a+b+i)){
            printf("%d",i);
            break;
        }
    }
}