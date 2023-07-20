#include<stdio.h>
int min(int a, int b){
    if(a > b) return b;
    else return a;
}
int main(){
    int n;
    scanf("%d",&n);
    int right = 1;
    for(int i = 0; i < n; i++){
        if(right <= n){
            right *= 2;
        }
    }
    int left = right / 2;
    printf("%d",min(n - left,right - n));
}