#include<stdio.h>
int SumOfFactors(int n){
    int sum = 0;
    for(int i = 1; i < n; i++){
        if(n % i == 0){
            sum += i;
        }
    }
    return sum;
}
int Isabundant(int num){
    int sum = SumOfFactors(num);
    if(sum > num) return 1;
    else return -1;
}
int main(){
    int num;
    scanf("%d",&num);
    if(Isabundant(num) == 1) printf("True");
    else printf("False");
}