#include<stdio.h>
int isprime(int n){
    for(int i = 2; i < n/2 + 1; i++){
        if(n % i == 0){
            return -1;
            break;
        }
    }
    return 1;
}
int main(){
    int n; 
    scanf("%d",&n);
    if(isprime(n) == 1){
        printf("prime");
    }
    else{
        printf("not a prime");
    }
}