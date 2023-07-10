#include<stdio.h>
int min(int a,int b){
    if(a < b){
        return a;
    }
    else{
        return b;
    }
}
int isprime(int n){
    if(n <= 1){
        return -1;
    }
    else if(n == 2){
        return 1;
    }
    for(int i = 2; i <= n/2 + 1; i++){
        if(n % i == 0){
            return -1;
            break;
        }
    }
    return 1;
}
int rightprime(int n){
    for(int i = n ;i <= 10000; i++){
        if(isprime(i) == 1){
            return i;
            break;
        }
    }
}
int leftprime(int n){
    for(int i = n; i > 1; i--){
        if(isprime(i) == 1){
            return i;
            break;
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int num1 = leftprime(n);
    int num2 = rightprime(n);
    printf("%d",min(num2 - n,n - num1));
}