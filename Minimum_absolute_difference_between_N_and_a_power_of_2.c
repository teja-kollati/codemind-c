#include<stdio.h>
int minimum(int a,int b){
    if(a < b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int left = 1;
    int right = 1;
    while(right <= n){
        right = right * 2;
    }
    left = right/2;
    printf("%d",minimum((n - left),(right - n)));
}