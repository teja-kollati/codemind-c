#include<stdio.h>
int ispalindrome(int n){
    int temp = n;
    int num = 0;
    while(temp > 0){
        int r = temp % 10;
        num = num * 10 + r;
        temp /= 10;
    }
    if(n == num) return 1;
    else return -1;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    for(int i = 0; i < n; i++){
        if(ispalindrome(arr[i]) == 1){
            count++;
        }
    }
    printf("%d",count);
}