#include<stdio.h>
int ispalindrome(int n){
    int temp = n;
    int num = 0;
    while(temp > 0){
        int digit = temp % 10;
        num = num * 10 + digit;
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
    int left;
    int right;
    for(int i = n - 1; i >= 0; i--){
        if(ispalindrome(i) == 1){
            left = i;
            break;
        }
    }
    for(int i = n + 1; i < 10000; i++){
        if(ispalindrome(i) == 1){
            right = i;
            break;
        }
    }
    if((n - left) < (right - n)){
        printf("%d",left);
    }
    else if((n - left) > (right - n)){
        printf("%d",right);
    }
    else{
        printf("%d %d",left,right);
    }
}