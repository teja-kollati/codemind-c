#include<stdio.h>
int sumofdigits(int num){
    int sum = 0;
    while(num != 0){
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
int singledigitsum(int num){
    while(num > 9){
        num = sumofdigits(num);
    }
    return num;
}
int main(){
    int n;
    scanf("%d",&n);
    int sum = singledigitsum(n);
    printf("%d",sum);
}