#include<stdio.h>
int isprime(int n){
    if(n <= 1){
        return 0;
    }
    else if(n == 2){
        return 1;
    }
    for(int i = 2; i <= n/2 + 1; i++){
        if(n % i == 0){
            return 0;
            break;
        }
    }
    return 1;
}
int main(){
    int n; 
    scanf("%d",&n);
    int count = 1;
    for(int i = 1; i <= n/2 + 1; i++){
        if(n % i == 0){
            if(isprime(i) == 0)
                count++;
        }
    }
    printf("%d",count);
}