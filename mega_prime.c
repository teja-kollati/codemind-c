#include<stdio.h>
int isprime(int n){
    if(n <= 1){
        return 0;
    }
    else if(n == 2){
        return 1;
    }
    for(int i = 2; i < n/2 + 1; i++){
        if(n % i == 0){
            return 0;
            break;
        }
    }
    return 1;
}
int ismegaprime(int n){
    if(isprime(n) == 0){
        return 0;
    }
    while(n > 0){
        int digit = n % 10;
        if(isprime(digit) == 0){
            return 0;
            break;
        }
        n /= 10;
    }
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    if(ismegaprime(n) == 1){
        printf("Mega Prime");
    }
    else{
        printf("Not Mega Prime");
    }
}