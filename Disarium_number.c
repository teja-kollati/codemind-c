#include<stdio.h>
int findcount(int n){
    int count = 0;
    while(n > 0){
        count++;
        n /= 10;
    }
    return count;
}
int power(int a, int b){
    int num = 1;
    while(b > 0){
        num = num * a;
        b--;
    }
    return num;
}
int isdisarium(int n){
    int num = 0;
    int temp = n;
    int count = findcount(n);
    while(temp > 0){
        int digit = temp % 10;
        num += power(digit,count);
        count--;
        temp /= 10;
    }
    if(num == n){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    if(isdisarium(n) == 1){
        printf("True");
    }
    else{
        printf("False");
    }
}