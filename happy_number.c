#include<stdio.h>
int squaresum(int n){
    int sum = 0;
    while(n > 0){
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}
int ishappy(int n){
    while(n > 9){
        n = squaresum(n);
    }
    if(n == 1 || n == 7){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    if(ishappy(n) == 1){
        printf("True");
    }
    else{
        printf("False");
    }
}